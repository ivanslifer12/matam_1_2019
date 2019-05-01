

#include "stdlib.h"
#include "stdio.h"
#include "../eurovision.h"
#include "stdbool.h"


#define CHECK(b,res)                            \
  if((b) != (res)) do{                          \
      printf("fail: %s != %s\n", #b, #res);     \
      eurovisionDestroy(eurovision);            \
      return false;                             \
    } while(0)

#define assert(x)    \
    if((x)==false) {  \
    printf("\n fail: %s", #x);  \
    } while(0)



static void addvotes(Eurovision euro, int from, int to, int amount){
    for(int num = 0 ; num < amount; num++){
        assert(eurovisionAddVote(euro,from,to)==EUROVISION_SUCCESS);
    }
}



int main(void){
    Eurovision euro = eurovisionCreate();

    int resultswrong[10]={0,1,2,3,4,5,6,7,8,9};
    assert(eurovisionAddJudge(euro,0,"a",resultswrong)== EUROVISION_STATE_NOT_EXIST);

    assert (eurovisionAddState(euro, -1, "A","b") == EUROVISION_INVALID_ID);
    assert (eurovisionAddState(euro, -1, NULL,"b") == EUROVISION_NULL_ARGUMENT);
    assert (eurovisionAddState(euro, -1, "HEY",NULL) ==
    EUROVISION_NULL_ARGUMENT);
    assert (eurovisionAddState(euro, 0, "C", "e" )==
    EUROVISION_INVALID_NAME);
    assert(eurovisionAddState(euro,0,"a","g") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro, 0,"a","g") ==
    EUROVISION_STATE_ALREADY_EXIST);

    assert(eurovisionAddState(euro,1,"b","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,2,"c","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,3,"d","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,4,"e","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,5,"f","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,6,"g","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,7,"h","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,8,"i","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,9,"j","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,10,"k","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,11,"l","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,12,"m","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,13,"n","b") == EUROVISION_SUCCESS);
    assert(eurovisionAddState(euro,14,"o","b") == EUROVISION_SUCCESS);

    //till now there are 11 countries in system: {0,1,2,3,4,5,6,7,8,9,10,11,
   // 12,13,14};
    int results1[10]={0,1,2,11,4,5,6,7,8,9};
    int results2[10]={1,2,3,4,5,6,7,8,9,10};
    int results3[10]={2,4,6,12,10,14,3,7,0,1};
    int results4[10]={3,6,9,13,5,4,2,1,0,12};

    assert(eurovisionAddJudge(euro,-1,"a",results1) == EUROVISION_INVALID_ID);
    assert(eurovisionAddJudge(euro,-1,"A",results1) == EUROVISION_INVALID_ID);
    assert(eurovisionAddJudge(euro,0,"Asa",results1) == EUROVISION_INVALID_NAME);
    assert(eurovisionAddJudge(euro,0,"asa",NULL) == EUROVISION_NULL_ARGUMENT);
    assert(eurovisionAddJudge(euro,0,NULL,results1) == EUROVISION_NULL_ARGUMENT);
    assert(eurovisionAddJudge(euro,-1,"A",results1) == EUROVISION_INVALID_ID);

    assert(eurovisionAddJudge(euro,0,"a",results1 ) == EUROVISION_SUCCESS);
    assert(eurovisionAddJudge(euro,1,"b",results2 ) == EUROVISION_SUCCESS);
    assert(eurovisionAddJudge(euro,2,"c",results3 ) == EUROVISION_SUCCESS);
    assert(eurovisionAddJudge(euro,3,"d",results4 ) == EUROVISION_SUCCESS);

    //till now there are 4 judges {0,1,2,3} each with their own results.
    // (according to above)
    assert(eurovisionRemoveState(euro,100) == EUROVISION_STATE_NOT_EXIST);
    assert(eurovisionRemoveState(euro,-1) == EUROVISION_INVALID_ID);
    assert(eurovisionRemoveState(NULL,1) == EUROVISION_NULL_ARGUMENT);

    assert(eurovisionRemoveState(euro,14) == EUROVISION_SUCCESS);
    //there are 0->13 states and judge 3 should be deleted since he voted for 14
    //therefore this next test should pass
    assert(eurovisionRemoveJudge(euro,2) == EUROVISION_JUDGE_NOT_EXIST);
    //since we removed state 14 then next test should pass
    assert(eurovisionRemoveState(euro,14) == EUROVISION_STATE_NOT_EXIST);

    ///////////////////////////////////////////////////////////////////////
    //adding/removing votes new
    ///////////////////////////////////////////////////////////////////////
    assert(eurovisionAddVote(euro,0,14) == EUROVISION_STATE_NOT_EXIST);
    assert(eurovisionAddVote(euro,0,-1) == EUROVISION_INVALID_ID);
    //adding votes from 0 to others
    for(int i = 1; i < 14; i++){
        if (i%2 == 0){
            addvotes(euro,0,i,4);
            continue;
        }
        addvotes(euro,0,i,5);
    }

    //adding votes from 1 to others


    for(int i = 0; i < 14; i++) {
        if (i == 1) {
            continue;
        }
        if (i % 3 == 0) {
            addvotes(euro, 1, i, 2);
            continue;
        }
        if (i % 3 == 1) {
            addvotes(euro, 1, i, 6);
            continue;
        }
        addvotes(euro, 1, i, 1);
    }

    //adding votes from 2 to 3 : 7 votes
    //adding votes from 2 to 8 : 11 votes
    //adding votes from 2 to 13 : 2 votes

    addvotes(euro, 2, 3, 7);
    addvotes(euro, 2, 8, 11);
    addvotes(euro, 2, 13, 2);

    //adding votes from 3 to 7 : 30
    //adding votes from 3 to 11 : 4
    //adding votes from 3 to 12: 19
    //adding votes from 3 to 6 : 5
    addvotes(euro, 3, 7, 30);
    addvotes(euro, 3, 11, 4);
    addvotes(euro, 3, 12, 19);
    addvotes(euro, 3, 6, 5);
   assert( eurovisionAddVote(euro,3, 19) == EUROVISION_STATE_NOT_EXIST);

    //adding votes from 4 to 1 : 2 votes
    //adding votes from 4 to 0 : 11 votes
    //adding votes from 4 to 12 : 12 votes
    //adding votes from 4 to 13 : 5 votes
    //adding votes from 4 to 10 : 12 votes
    //adding votes from 4 to 6 : 1 votes

    addvotes(euro, 4, 1, 2);
    addvotes(euro, 4, 0, 11);
    addvotes(euro, 4, 12, 12);
    addvotes(euro, 4, 13, 5);
    addvotes(euro, 4, 10, 12);
    addvotes(euro, 4, 6, 1);

    //adding votes from 8 to 1 : 22 votes
    //adding votes from 8 to 9 : 10 votes
    addvotes(euro, 8, 1, 22);
    addvotes(euro, 8, 9, 10);

    //adding votes from 11 to 10 : 5 votes
    addvotes(euro, 11, 10, 5);
    //adding votes from 13 to 4 : 22 votes
    //adding votes from 13 to 6 : 2 votes
    addvotes(euro, 13, 4, 22);
    addvotes(euro, 13, 6, 2);

    assert(eurovisionAddState(euro, 15, "test", "test") == EUROVISION_SUCCESS);
    addvotes(euro, 0,15,3);
    assert(eurovisionRemoveVote(euro, 0 ,15) == EUROVISION_SUCCESS);
    assert(eurovisionRemoveVote(euro, 0 ,15) == EUROVISION_SUCCESS);
    assert(eurovisionRemoveVote(euro, 0 ,15) == EUROVISION_SUCCESS);
    assert(eurovisionRemoveVote(euro, 0 ,15) == EUROVISION_SUCCESS);
    assert(eurovisionRemoveState(euro,15) == EUROVISION_SUCCESS);

    List list = eurovisionRunContest(euro,50);

    printf("\n");
    LIST_FOREACH(char*,curr, list){
        printf("%s, ",curr);
    }
    listDestroy(list);
    eurovisionDestroy(euro);
    return 0;
}
