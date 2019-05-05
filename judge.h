#ifndef MATAM1_JUDGE_H
#define MATAM1_JUDGE_H

#include "namelib.h"
#include "stdbool.h"
#include "list.h"

typedef struct judge_t *Judge;

/*
 * creats new Judge object for initial use in the program
 */
Judge AllocateJudge(Element unique_id, Element judge_name, Element judge_points);

/*
 * copy function for the country object useful for ADT
 */
ListElement CopyJudge(Element judge_struct);

/*
 * free function for country object
 */
void FreeJudge(Element judge_struct);

/*
 * Update the Value in the pointers given
 */
void ADTJudgeReader(Element judge, UniqueId *unique_id, Name judge_name, Data *judge_points);


#endif //MATAM1_JUDGE_H
