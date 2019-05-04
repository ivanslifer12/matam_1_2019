#include "eurovision.h"
#include "list.h"
#include "namelib.h"
#include "stdlib.h"
#include "judge.h"
#include "stdio.h"
#include "support_functions.h"
#include "string.h"


struct judge_t {
    UniqueId unique_id;
    Name judge_name;
    Data judge_points[RANKED_COUNTRIES];

};


Judge AllocateJudge(Element unique_id, Element judge_name, Element judge_points) {
    Judge judge = malloc(sizeof(*judge));
    if (! judge) {
        return NULL;
    }

    judge->unique_id = StringToInt((Name) unique_id);
    judge->judge_name = copyString((Name) judge_name);
    if (! judge->judge_name) {
        return NULL;
    }
    for (int i = 0; i < RANKED_COUNTRIES; ++ i) {

        judge->judge_points[i] = ((Data *) judge_points)[i];
    }

    return judge;
}

/*
bool NameTest(Name judge_name) {
    for (int i = 0; judge_name[i] != '\0'; i ++) {
        if (((judge_name[i] >= 'a' && judge_name[i] <= 'z') || judge_name[i] == ' ') == false)
            return false;
    }
    return true;
}
 */

void ADTJudgeReader(Element judge, UniqueId *unique_id, Name judge_name, Data *judge_points) {
    Judge temp = (Judge) judge;
    if (unique_id != NULL) {
        *unique_id = temp->unique_id;
    }
    if (judge_name != NULL) {
        judge_name = temp->judge_name;
    }
    if (judge_points != NULL) {
        for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
            judge_points[i] = temp->judge_points[i];
        }
    }

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
