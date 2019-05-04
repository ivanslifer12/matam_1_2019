#ifndef MATAM1_JUDGE_H
#define MATAM1_JUDGE_H

#include "namelib.h"
#include "eurovision.h"
#include "stdbool.h"
#include "list.h"

typedef struct judge_t *Judge;


Judge AllocateJudge(Element unique_id, Element judge_name, Element judge_points);

bool NameTest(Name judge_name);

ListElement CopyJudge(Element judge_struct);

void FreeJudge(Element judge_struct);


void ADTJudgeReader(Element judge,UniqueId* unique_id,Name judge_name,Data * judge_points);


#endif //MATAM1_JUDGE_H
