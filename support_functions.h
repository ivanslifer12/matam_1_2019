#ifndef MATAM1_SUPPORT_FUNCTIONS_H
#define MATAM1_SUPPORT_FUNCTIONS_H

#include "namelib.h"
#include "eurovision.h"
#include "stdbool.h"
typedef struct initialization_t *Initialization;



bool UniqueCountryName(Eurovision eurovision, int stateId);

bool UniqueJudgeName(Eurovision eurovision, int judgeId);

bool ConstNameTest(const char *name);


bool AssociatedCountryId(Eurovision eurovision, int *judgeResults);


/*
 * must use this because you can't cast int->void*->int
 * dont forget to free the string from memory if you
 * dont use cast it back to int
 */
char* IntToString(int num);

int StringToInt(char *str);

int StringToIntNoFree(char *str);

EurovisionResult VotesTest(Eurovision eurovision, int stateGiver,
                           int stateTaker);

ListElement copyString(ListElement str);

void freeString(Element str);

EurovisionResult CalculatePointsFromPeople(Eurovision eurovision,int amount_of_countries);
void CalculatePointsFromJudge(Eurovision eurovision);
int JudgeRank(int number);
void AddPointsToTheNext(Eurovision eurovision,int* ptr,int array_length);
void CalculateAverageScore(Eurovision eurovision, int number_of_jadges, int number_of_countries,int audiencePercent);
List MakeWinnersList(Eurovision eurovision,int amount_of_countries);
EurovisionResult CalculatePointsFromCountry(Eurovision eurovision, int *ptr, int array_length);
//EurovisionResult CalculateFriendlyCountry(Eurovision eurovision, int *ptr,int country,int array_length);
char* ConnectStrings(const char *s1, const char *s2);

List ListOfStringsFilter(List list);
void SwapStringPointers(char **str1, char **str2);
void StringsQuickSort(char *str[], unsigned int length);
List FilterLexicographicFilter(List list);
int MaxInArray(int * array,int array_length,int array_offset );
List FilterListForFriends(List list);
double NumberRound(double number);
Name ConnectThreeStrings(const char *str1, const char *str2,const char *str3);

#endif //MATAM1_SUPPORT_FUNCTIONS_H
