#include "eurovision.h"
#include "list.h"
#include "namelib.h"
#include "stdlib.h"
#include "country.h"
#include "judge.h"
#include "points.h"
#include "stdio.h"
#include "support_functions.h"
#include "string.h"


struct judge_t {
    UniqueId unique_id;
    Name judge_name;
    Data judge_points[RANKED_COUNTRIES];

};


Judge AllocateJudge(Element unique_id, Element judge_name, Element judge_points) {
    /* if (judge == NULL || unique_id == NULL || judge_name == NULL || judge_points == NULL) {
         return EUROVISION_NULL_ARGUMENT;
     }
     if (*((UniqueId *) unique_id) <= 0) {
         return EUROVISION_INVALID_ID;
     }
     if (! NameTest((Name) judge_name)) {
         return EUROVISION_INVALID_NAME;
     }
     for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
         if (((Data *) judge_points)[i] <= 0) { //test this latter
             return EUROVISION_INVALID_ID;
         }
     }
     */
    Judge judge = malloc(sizeof(*judge));
    if (! judge) {
        return NULL;
    }

    judge->unique_id =StringToInt((Name)unique_id);
    judge->judge_name = copyString((Name) judge_name);
    if (! judge->judge_name) {
        return NULL;
    }
        for (int i = 0; i < RANKED_COUNTRIES; ++ i) {

            judge->judge_points[i] = ((Data*) judge_points)[i];
        }

    return judge;
}


bool NameTest(Name judge_name) {
    for (int i = 0; judge_name[i] != '\0'; i ++) {
        if (((judge_name[i] >= 'a' && judge_name[i] <= 'z') || judge_name[i] == ' ') == false)
            return false;
    }
    return true;
}


ListElement CopyJudge(Element judge_struct) {
    Judge created_judge = malloc(sizeof(*created_judge));
    if (! created_judge) {
        return NULL;
    }
    created_judge->unique_id = ((Judge) judge_struct)->unique_id;

    for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
        created_judge->judge_points[i] = ((Judge) judge_struct)->judge_points[i];
    }

    created_judge->judge_name = copyString(((Judge) judge_struct)->judge_name);

    return created_judge;
}

void FreeJudge(Element judge_struct) {
    if (! (Judge) judge_struct) {
        return;
    }
    free(((Judge) judge_struct)->judge_name);
    free((Judge) judge_struct);

}
