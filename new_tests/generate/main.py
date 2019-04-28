import random
import string
import math
from decimal import Decimal

PRE = '''#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../libmtm/list.h"
#include "../eurovision/eurovision.h"
#include "utils.c"

'''

EURO_NAME = "eurovision"
ADD_STATE = "\teurovisionAddState"
REMOVE_STATE = "\teurovisionRemoveState"
ADD_JUDGE = "\teurovisionAddJudge"
REMOVE_JUDGE = "\teurovisionRemoveJudge"
ADD_VOTE = "\teurovisionAddVote"
REMOVE_VOTE = "\teurovisionRemoveVote"
RUN_CONTEST = "\teurovisionRunContest"
AUDIENCE_FAVORITE = "\teurovisionRunAudienceFavorite"
GET_FRIENDLY = "\teurovisionRunGetFriendlyStates"
CHECK_FMT = "\tCHECK(strcmp(current, \"%s\"), 0);\n"
MAKE_JUDGE_RESULTS = "makeJudgeResults"

RAND_JUDGE = 10
RAND_STATE = RAND_JUDGE + 10
RAND_REMOVE = 25
MAX_ID = 999999
MAX_STR_LEN = 100

SCORES = [12, 10, 8, 7, 6, 5, 4, 3, 2, 1]


class State:
    def __init__(self, state_id, name, song):
        self.id = state_id
        self.name = name
        self.song = song
        self.votes = {}


class Judge:
    def __init__(self, judge_id, name, results):
        self.id = judge_id
        self.name = name
        self.results = results

    def is_valid(self, states):
        for state in self.results:
            if state not in states:
                return False
        return True


def rand_string():
    return ''.join(random.choice(string.ascii_lowercase + ' ') for _ in
                   range(random.randint(1, MAX_STR_LEN)))


def new_id(d):
    new = random.randint(0, MAX_ID)
    while new in d.keys():
        new = random.randint(0, MAX_ID)
    return new


def add_state(f, states):
    state = new_id(states)
    name = rand_string()
    song = rand_string()
    states[state] = State(state, name, song)
    f.write("%s(%s, %d, \"%s\", \"%s\");\n" % (ADD_STATE, EURO_NAME,
                                               state, name, song))


def remove_state(f, states):
    state = random.choice(states.keys())
    states.pop(state)
    for state_id in states:
        if state in states[state_id].votes:
            states[state_id].votes.pop(state)
    f.write("%s(%s, %d);\n" % (REMOVE_STATE, EURO_NAME, state))


def add_judge(f, states, judges):
    judge = new_id(judges)
    name = rand_string()
    results = []
    for i in range(len(SCORES)):
        opts = [key for key in states.keys() if key not in results]
        if len(opts) == 0:
            break
        results.append(random.choice(opts))
    judges[judge] = Judge(judge, name, results)
    results_str = ",".join(str(i) for i in results)
    f.write("    results = %s(%s);\n" % (MAKE_JUDGE_RESULTS, results_str))
    f.write("%s(%s, %d, \"%s\", results);\n" % (ADD_JUDGE, EURO_NAME,
                                                judge, name))
    f.write("    free(results);\n")


def remove_judge(f, judges):
    judge = random.choice(judges.keys())
    judges.pop(judge)
    f.write("%s(%s, %d);\n" % (REMOVE_JUDGE, EURO_NAME, judge))


def inc_vote(f, states):
    giver = random.choice(states.keys())
    taker = random.choice([key for key in states.keys() if key != giver])
    i = random.randint(1, 500)
    new = {taker: states[giver].votes.get(taker, 0)+i}
    states[giver].votes.update(new)
    f.write("\tfor (int i=0; i<%d; ++i) {\n" % i)
    f.write("\t%s(%s, %d, %d);\n" % (ADD_VOTE, EURO_NAME, giver, taker))
    f.write("\t}\n")


def dec_vote(f, states):
    giver = random.choice(states.keys())
    taker = random.choice([key for key in states.keys() if key != giver])
    i = random.randint(1, 500)
    if taker in states[giver].votes:
        states[giver].votes[taker] -= i
        if states[giver].votes[taker] < 0:
            states[giver].votes[taker] = 0
    f.write("\tfor (int i=0; i<%d; ++i) {\n" % i)
    f.write("\t%s(%s, %d, %d);\n" % (REMOVE_VOTE, EURO_NAME, giver, taker))
    f.write("\t}\n")


def rand_action(f, states, judges):
    r1 = random.randint(1, 100)
    r2 = random.randint(1, 100)

    if r1 <= RAND_JUDGE and len(states) >= 10:
        if r2 <= RAND_REMOVE and len(judges) > 0:
            remove_judge(f, judges)
        else:
            add_judge(f, states, judges)
    elif r1 <= RAND_STATE:
        if r2 <= RAND_REMOVE and len(states) > 0:
            remove_state(f, states)
        else:
            add_state(f, states)
    else:
        if r2 <= RAND_REMOVE:
            dec_vote(f, states)
        else:
            inc_vote(f, states)


def cmp_scores(item1, item2):
    # higher score is first
    # this is the easiest solution to floating point problems
    # it works only 99% of the time, should be enough for actual
    # HW tests
    score_diff = math.floor(Decimal(str(item1[1]*100))) - \
                 math.floor(Decimal(str(item2[1]*100)))
    if score_diff == 0:
        return item1[0] - item2[0]  # lower id is first
    if score_diff > 0:
        return -1
    else:
        return 1


def add_votes(scores, state):
    i = 0
    for taker, score in sorted(state.votes.items(), cmp=cmp_scores):
        if score == 0 or len(SCORES) == i:
            return
        scores[taker] += SCORES[i]
        i += 1


def get_factor(i):
    if i > 0:
        return 1.0/i
    return 0


def filter_judges(judges, states):
    final = {}
    for judgeId in judges:
        if judges[judgeId].is_valid(states):
            final[judgeId] = judges[judgeId]
    return final


def calc_contest(states, judges, aud_perc):
    judges = filter_judges(judges, states)
    state_scores = {}
    judge_scores = {}
    scores = {}
    for state in states:
        state_scores[state] = 0.0
        judge_scores[state] = 0.0
        scores[state] = 0.0

    for state in states:
        add_votes(state_scores, states[state])
    for judgeId, judge in judges.items():
        for i, state in enumerate(judge.results):
            judge_scores[state] += SCORES[i]

    state_factor = get_factor(len(states)-1)
    judge_factor = get_factor(len(judges))
    for state in scores:
        state_scores[state] = state_scores[state] * state_factor
        judge_scores[state] = judge_scores[state] * judge_factor
        scores[state] = (state_scores[state] * aud_perc/100.0) + (
                        judge_scores[state] * (100 - aud_perc)/100.0)

    final = []
    for state in sorted(scores.items(), cmp=cmp_scores):
        final.append(states[state[0]].name)
    return final


def calc_friendly(states):
    top = {}
    for state in states:
        top[state] = -1
    for state in states:
        if len(states[state].votes) == 0:
            continue
        top[state] = sorted(states[state].votes.items(),
                            cmp=cmp_scores)[0][0]
    s = set()
    for state, friend in top.items():
        if friend != -1 and top[friend] == state:
            st = " - ".join(sorted([states[state].name, states[
                friend].name]))
            s.add(st)
    final = list(s)
    return sorted(final)


def run(f, result, func):
    f.write(func)
    f.write("    CHECK(listGetSize(ranking), %d);\n" % len(result))
    if len(result) != 0:
        f.write("    char* current = (char*)listGetFirst(ranking);\n")
        f.write(CHECK_FMT % result[0])
        for i in range(1, len(result)):
            f.write("    current = (char*)listGetNext(ranking);\n")
            f.write(CHECK_FMT % result[i])
    f.write("    listDestroy(ranking);\n")
    f.write("    return true;\n")
    f.write("}\n\n")


def run_contest(f, test_num, states, judges):
    aud_perc = random.randint(1, 100)
    f.write("bool runContest%d(Eurovision %s) {\n" % (test_num, EURO_NAME))
    func = "    List ranking = %s(%s, %d);\n" % (RUN_CONTEST, EURO_NAME,
                                                 aud_perc)
    result = calc_contest(states, judges, aud_perc)
    run(f, result, func)


def run_aud(f, test_num, states, judges):
    f.write("bool runAudience%d(Eurovision %s) {\n" % (test_num,
                                                       EURO_NAME))
    func = "    List ranking = %s(%s);\n" % (AUDIENCE_FAVORITE, EURO_NAME)
    result = calc_contest(states, judges, 100)
    run(f, result, func)


def run_friendly(f, test_num, states):
    f.write("bool runFriendly%d(Eurovision %s) {\n" % (test_num,
                                                       EURO_NAME))
    func = "    List ranking = %s(%s);\n" % (GET_FRIENDLY, EURO_NAME)
    result = calc_friendly(states)
    run(f, result, func)


def setup(f, test_num, states, judges):
    f.write("void setup%d(Eurovision %s){\n" % (test_num, EURO_NAME))
    f.write("    int *results;\n")
    for test_num in range(random.randint(10, 20)):
        add_state(f, states)
    for test_num in range(random.randint(10, 20)):
        add_judge(f, states, judges)
    for test_num in range(random.randint(100, 500)):
        rand_action(f, states, judges)
    f.write("}\n\n")


def pre(f):
    f.write(PRE)


def test(f, test_func, test_num):
    f.write("bool test%d_%s(){\n" % (test_num, test_func))
    f.write("    Eurovision %s = eurovisionCreate();\n" % EURO_NAME)
    f.write("    assert(%s);\n" % EURO_NAME)
    f.write("    setup%d(%s);\n" % (test_num, EURO_NAME))
    f.write("    %s%d(%s);\n" % (test_func, test_num, EURO_NAME))
    f.write("    eurovisionDestroy(%s);\n" % EURO_NAME)
    f.write("    return true;\n")
    f.write("}\n\n")


def post(f, test_num):
    test(f, "runContest", test_num)
    test(f, "runAudience", test_num)
    test(f, "runFriendly", test_num)


def new_test(test_num):
    f = open("test%d.c" % test_num, "w")
    states = {}
    judges = {}
    pre(f)
    setup(f, test_num, states, judges)
    run_contest(f, test_num, states, judges)
    run_aud(f, test_num, states, judges)
    run_friendly(f, test_num, states)
    post(f, test_num)
    f.close()


def create_main(num):
    f = open("main.c", "w")
    f.write('#include "utils.c"\n')
    for i in range(1, num):
        f.write('#include "test%d.c"\n' % i)
    f.write("\n")
    f.write("int main(int argc, char *argv[]) {\n")
    for i in range(1, num):
        f.write('\tTEST(test%d_runContest);\n' % i)
        f.write('\tTEST(test%d_runAudience);\n' % i)
        f.write('\tTEST(test%d_runFriendly);\n' % i)
    f.write("}\n")
    f.close()


def main():
    num_of_tests = 100
    for i in range(1, num_of_tests+1):
        print "Starting test number:", i
        new_test(i)
    create_main(num_of_tests+1)


if __name__ == "__main__":
    main()
