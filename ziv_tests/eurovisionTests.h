#ifndef EUROVISIONTESTS_H_
#define EUROVISIONTESTS_H_

#include <stdbool.h>
bool testAddState();
bool testRemoveState();
bool testAddJudge();
bool testRemoveJudge();
bool testAddVote();
bool testRemoveVote();
bool testRunContest();
bool testRunAudienceFavorite();
bool testRunGetFriendlyStates();

bool specialTest1_OnlyJudges1();
bool specialTest3_NoVotesNoJudges();
bool specialTest2_OnlyJudges2();
bool specialTest4_addAndRemoveStatesLikeCrazy();
bool specialTest5_invalidPercent();
bool specialTest6_NoJudges();
bool specialTest7_OneStateAndNoState();
bool specialTest8_VoteLikeMad();
bool specialTest9_allJudgesAreCrazy();
bool specialTest10_statesGoingWild();
bool specialTest11_GiveAndTake();
bool specialTest12_duasPoua();

#endif /* EUROVISIONTESTS_H_ */
