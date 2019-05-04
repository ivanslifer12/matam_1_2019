/* UPDATED: 2019-05-02
 * Created by Idan Fischman - contact me if you find any problems
 * No valgrind errors should rise if you pass all the tests
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "../list.h"
#include "../eurovision.h"
#include "eurovisionTests.h"
#include "../support_functions.h"
#include "../judge.h"
#include "../country.h"



#define POINTS_OPTIONS_NUMBER 10
#define CHECK(b,res)                            \
  if((b) != (res)) do{                          \
      printf("fail: %s != %s\n", #b, #res);     \
      eurovisionDestroy(eurovision);            \
      return false;                             \
    } while(0)

struct initialization_t {
    bool list_of_countries;
    bool list_of_judges;
    bool list_of_points;

};

struct country_t {
    Name country_name;
    Name song_name;
    UniqueId unique_id;
    UniqueId pre_average_points;
    Score post_average_points;
    UniqueId pre_average_points_judge;
    Score post_average_points_judge;
    Score final_score;
    bool calculated_place;
    List gave_max_points;

};

struct judge_t {
    UniqueId unique_id;
    Name judge_name;
    Data judge_points[RANKED_COUNTRIES];

};

struct points_t {
    UniqueId points_from_country;
    UniqueId points_to_country;

};

struct eurovision_t {
    List list_of_countries;
    List list_of_judges;
    List list_of_points;
    Initialization initialization;

};

static Eurovision setupEurovision() {
    Eurovision eurovision = eurovisionCreate();
    assert(eurovision);
    return eurovision;
}

static void setupEurovision10_states(Eurovision eurovision) {
    eurovisionAddState(eurovision, 0, "zero", "home");
    eurovisionAddState(eurovision, 1, "one", "chameleon");
    eurovisionAddState(eurovision, 2, "two", "the dream");
    eurovisionAddState(eurovision, 3, "three", "scream");
    eurovisionAddState(eurovision, 4, "four", "stay");
    eurovisionAddState(eurovision, 5, "five", "replay");
    eurovisionAddState(eurovision, 6, "six", "la venda");
    eurovisionAddState(eurovision, 7, "seven", "soldi");
    eurovisionAddState(eurovision, 8, "eight", "roi");
    eurovisionAddState(eurovision, 9, "nine", "sister");
}

static int *makeJudgeResults(int id0, int id1, int id2, int id3, int id4,
                             int id5, int id6, int id7, int id8, int id9) {
    int *results = malloc(POINTS_OPTIONS_NUMBER * sizeof(*results));
    assert(results);
    results[0] = id0;
    results[1] = id1;
    results[2] = id2;
    results[3] = id3;
    results[4] = id4;
    results[5] = id5;
    results[6] = id6;
    results[7] = id7;
    results[8] = id8;
    results[9] = id9;
    return results;
}


/* ******  JUDGES SCORES ARE:  *****
+-------+---------+---------+---------+-------+--------------+------------+
| state | judge 0 | judge 1 | judge 2 | total | judges 0+1+2 | judges 1+2 |
+-------+---------+---------+---------+-------+--------------+------------+
|     9 |       1 |       3 |       8 |    12 |            4 |        5.5 |
|     8 |       2 |       4 |      10 |    16 |  5.333333333 |          7 |
|     7 |       3 |       5 |      12 |    20 |  6.666666667 |        8.5 |
|     6 |       4 |       6 |       1 |    11 |  3.666666667 |        3.5 |
|     5 |       5 |       7 |       2 |    14 |  4.666666667 |        4.5 |
|     4 |       6 |       8 |       3 |    17 |  5.666666667 |        5.5 |
|     3 |       7 |      10 |       4 |    21 |            7 |          7 |
|     2 |       8 |      12 |       5 |    25 |  8.333333333 |        8.5 |
|     1 |      10 |       1 |       6 |    17 |  5.666666667 |        3.5 |
|     0 |      12 |       2 |       7 |    21 |            7 |        4.5 |
+-------+---------+---------+---------+-------+--------------+------------+
 */
static void setupEurovisionJudges(Eurovision eurovision) {
    int *results;
    results = makeJudgeResults(0, 1, 2, 3, 4, 5, 6,  7, 8, 9);
    eurovisionAddJudge(eurovision, 0, "olsen", results);
    free(results);
    results = makeJudgeResults(2, 3, 4, 5, 6, 7, 8, 9, 0, 1);
    eurovisionAddJudge(eurovision, 1, "tanel", results);
    free(results);
    results = makeJudgeResults(7, 8, 9, 0, 1, 2, 3,  4, 5, 6);
    eurovisionAddJudge(eurovision, 2, "marie", results);
    free(results);
}

bool testIdOrder(Eurovision eurovision) {
    printf("Testing by ids order: ");
    List result = eurovisionRunContest(eurovision, 100);
    CHECK(listGetSize(result), 10);
    char *current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "zero"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "one"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "two"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "six"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "eight"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "nine"), 0);
    printf(" SUCCESS\n");
    listDestroy(result);
    return true;
}

bool testRemoveStateAndJudges() {
    printf("Testing remove state and judges as a result");
    Eurovision eurovision = setupEurovision();
    setupEurovision10_states(eurovision);
    setupEurovisionJudges(eurovision);
    eurovisionRemoveState(eurovision, 0);

    List result = eurovisionRunContest(eurovision, 30);
    CHECK(listGetSize(result), 9);
    char *current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "one"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "two"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "six"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "eight"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "nine"), 0);

    listDestroy(result);
    eurovisionDestroy(eurovision);
    printf(": SUCCESS\n");
    return true;
}

bool testJudgesScores () {
    printf("Testing only judges score: ");
    Eurovision eurovision = setupEurovision();
    setupEurovision10_states(eurovision);
    setupEurovisionJudges(eurovision);
    List result = eurovisionRunContest(eurovision, 10);
    CHECK(listGetSize(result), 10);
    char *current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "two"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "zero"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "one"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "eight"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "nine"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "six"), 0);
    listDestroy(result);
    printf("SUCCESS\n");




    printf("Testing after deleting one judge: ");
    eurovisionRemoveJudge(eurovision, 0);

    result = eurovisionRunContest(eurovision, 10);
    printf("\n");
    /*LIST_FOREACH(Name,name,result){
        printf(" %s",name);
    } */
    current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "two"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "eight"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "nine"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "zero"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "one"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "six"), 0);
    printf("SUCCESS\n");

    listDestroy(result);
    eurovisionDestroy(eurovision);
    return true;
}
bool testAudienceScores() {
    Eurovision eurovision = setupEurovision();
    setupEurovision10_states(eurovision);
    setupEurovisionJudges(eurovision);
    for (int i=0; i<3; i++) { // testing delete of judges
        eurovisionRemoveJudge(eurovision, i);
    }
    printf("Testing All countries same score: ");
    for(int i=0; i<10; i++) { // each country one vote to other country
        eurovisionAddVote(eurovision, i, (i+1)%10);
    }
    if (testIdOrder(eurovision)) { // check after deleting some countries
        for (int i=0; i<10; i++) {
            eurovisionRemoveVote(eurovision, i+1, i);
        }
        printf("Testing deleting votes that don't exist: ");
        testIdOrder(eurovision);
        for (int i=0; i<10; i++) {
            eurovisionRemoveVote(eurovision, i, (i+1)%10);
        }
        printf("Testing after delete all votes: ");
        testIdOrder(eurovision);
    }
    else {
        eurovisionDestroy(eurovision);
        return false;
    }
    eurovisionDestroy(eurovision);
    return true;
}

bool testFriendly() {
    printf("Testing no friendlies: ");
    Eurovision eurovision = setupEurovision();
    setupEurovision10_states(eurovision);
    // create 0 friendlies
    for (int i=0; i< 10; i++) {
        eurovisionAddVote(eurovision, i, (i+1)%10);
    }
    List result = eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(result), 0);
    CHECK(listGetFirst(result), NULL);
    printf(" SUCCESS\n");
    for (int i=0; i< 10; i+=2) { //add friendlies
        eurovisionRemoveVote(eurovision, i, (i+1)%10);
        eurovisionRemoveVote(eurovision, i+1, (i+2)%10);
        eurovisionAddVote(eurovision, i, i+1);
        eurovisionAddVote(eurovision, i+1, i);
    }
    listDestroy(result);
    printf("Testing all are friendlies: ");
    result = eurovisionRunGetFriendlyStates(eurovision);
    printf("the size is %d",listGetSize(result));
    CHECK(listGetSize(result), 5);
    char* current;
    current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "eight - nine"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five - four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "one - zero"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven - six"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three - two"), 0);
    printf(" SUCCESS\n");
    eurovisionRemoveState(eurovision, 1);
    listDestroy(result);
    printf("Testing only part friendlies: ");
    result = eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetSize(result), 4);
    current = (char*)listGetFirst(result);
    CHECK(strcmp(current, "eight - nine"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "five - four"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "seven - six"), 0);
    current = (char*)listGetNext(result);
    CHECK(strcmp(current, "three - two"), 0);
    printf(" SUCCESS\n");
    listDestroy(result);
    eurovisionDestroy(eurovision);
    return true;
}

bool testEmptyRun() {
    Eurovision eurovision = setupEurovision();
    printf("Testing empty contest: ");
    List result = eurovisionRunContest(eurovision, 60);
    printf("\n");
    LIST_FOREACH(Name,name,result){
        printf("%s",name);
    }
    CHECK(listGetFirst(result), NULL);
    CHECK(listGetSize(result), 0);
    listDestroy(result);
    result = eurovisionRunAudienceFavorite(eurovision);
    CHECK(listGetFirst(result), NULL);
    CHECK(listGetSize(result), 0);
    listDestroy(result);
    result = eurovisionRunGetFriendlyStates(eurovision);
    CHECK(listGetFirst(result), NULL);
    CHECK(listGetSize(result), 0);
    printf(" SUCCESS\n");
    listDestroy(result);
    eurovisionDestroy(eurovision);
    return true;
}

int main() {
    testRemoveStateAndJudges();
    testJudgesScores();
    testAudienceScores();
    testFriendly();
    testEmptyRun();
    return 0;
}
