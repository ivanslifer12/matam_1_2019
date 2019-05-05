#ifndef MATAM1_SUPPORT_FUNCTIONS_H
#define MATAM1_SUPPORT_FUNCTIONS_H

#include "namelib.h"
#include "eurovision.h"
#include "stdbool.h"

typedef struct initialization_t *Initialization;


/*
 * true when the id of the country is Unique
 */
bool UniqueCountryName(Eurovision eurovision, int stateId);
/*
 * true when the id of the judge is Unique
 */
bool UniqueJudgeName(Eurovision eurovision, int judgeId);
/*
 * true when the name given is within the rules of eurovision
 */
bool ConstNameTest(const char *name);
/*
 * false when one of the votes from the judges is illegal
 */
bool AssociatedCountryId(Eurovision eurovision, int *judgeResults);


/*
 * must use this because you can't cast int->void*->int
 * dont forget to free the string from memory if you
 * dont use cast it back to int
 */
char *IntToString(int num);

int StringToInt(char *str);

int StringToIntNoFree(char *str);

/*
 * checks if the given vote is legal within the eurovision rules
 */
EurovisionResult VotesTest(Eurovision eurovision, int stateGiver,
                           int stateTaker);

/*
 * generic function for string copy
 */
ListElement copyString(ListElement str);

/*
 * frees strings from memory
 */
void freeString(Element str);

/*
 * updated the eurovision data with the votes from the people
 */
EurovisionResult CalculatePointsFromPeople(Eurovision eurovision, int amount_of_countries);

/*
 * updated the eurovision data with the votes from the judges
 */
void CalculatePointsFromJudge(Eurovision eurovision);

/*
 * ranks each vote from judge or country within the eurovision rules
 */
int JudgeRank(int number);

/*
 * auxiliary function for calculating votes from people
 */
void AddPointsToTheNext(Eurovision eurovision, int *ptr, int array_length);

/*
 * sums up all the votes from the people and judges with a percent of power for each
 */
void CalculateAverageScore(Eurovision eurovision, int number_of_jadges, int number_of_countries, int audiencePercent);

/*
 * makes a list with the countries the won the eurovision
 */
List MakeWinnersList(Eurovision eurovision, int amount_of_countries);

/*
 * auxiliary function for calculating votes from people
 */
EurovisionResult CalculatePointsFromCountry(Eurovision eurovision, int *ptr, int array_length);

/*
 * Connects 2 strings into one
 */
char *ConnectStrings(const char *s1, const char *s2);
/*
 * turns a list of string to unique list of strings
 */
List ListOfStringsFilter(List list);
/*
 * auxiliary function for lexicographic string sort
 */
void SwapStringPointers(char **str1, char **str2);
/*
 * auxiliary function for lexicographic string sort
 */
void StringsQuickSort(char *str[], unsigned int length);
/*
 * lexicographic string quick sort
 */
List FilterLexicographicFilter(List list);

/*
 * finds the maximum value in array with given offset
 */
int MaxInArray(int *array, int array_length, int array_offset);
/*
 * returns list for eurovision rules
 */
List FilterListForFriends(List list);
/*
 * rounds number isn't used anymore
 */
double NumberRound(double number);
/*
 * turns 3 strings into one string
 */
Name ConnectThreeStrings(const char *str1, const char *str2, const char *str3);
/*
 * destroys a list
 */
void DestroyFriendList(Eurovision eurovision);
/*
 * auxiliary function for removing a state from eurovision
 */
EurovisionResult UpdateJudgeList(Eurovision eurovision, int stateId);
/*
 * auxiliary function for removing a state from eurovision
 */
EurovisionResult UpdateCountryList(Eurovision eurovision, int stateId);
/*
 * creates a list of friendly counties
 */
List RunGetFriendlyStates(Eurovision eurovision, List list, List copy_country);

#endif //MATAM1_SUPPORT_FUNCTIONS_H
