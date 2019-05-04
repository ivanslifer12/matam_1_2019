#include <stdio.h>
#include <stdlib.h>
#include "eurovisionTests.h"

#define TEST(t)                                                                \
  do {                                                                         \
    printf("Testing %s ...\n", #t);                                            \
    if ((t()))                                                                 \
      printf("Test %s: SUCCESS\n", #t);                                        \
    else                                                                       \
      printf("Test %s: FAIL\n", #t);                                           \
  } while (0);

int main(int argc, char *argv[]) {

    /*
     * SEGEL
     */
    TEST(testAddState)
    TEST(testRemoveState)
    TEST(testAddJudge)
    TEST(testRemoveJudge)
    TEST(testAddVote)
    TEST(testRemoveVote)
    TEST(testRunContest)
    TEST(testRunAudienceFavorite)
    TEST(testRunGetFriendlyStates)


    printf("\n ***************** \n SPECIAL TESTS \n ***************** \n ");
    TEST(specialTest3_NoVotesNoJudges)
    TEST(specialTest1_OnlyJudges1)
    TEST(specialTest2_OnlyJudges2)
    TEST(specialTest3_NoVotesNoJudges)
    TEST(specialTest4_addAndRemoveStatesLikeCrazy)
    TEST(specialTest5_invalidPercent)
    TEST(specialTest6_NoJudges)
    TEST(specialTest7_OneStateAndNoState)
    TEST(specialTest8_VoteLikeMad)
    TEST(specialTest9_allJudgesAreCrazy)
    TEST(specialTest10_statesGoingWild)
    TEST(specialTest11_GiveAndTake)
    TEST(specialTest12_duasPoua)
    return 0;
}
