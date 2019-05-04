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
#include "limits.h"

struct initialization_t {
    bool list_of_countries;
    bool list_of_judges;
    bool list_of_points;

};

struct eurovision_t {
    List list_of_countries;
    List list_of_judges;
    List list_of_points;
    Initialization initialization;

};

/*
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
*/

bool ConstNameTest(const char *name) {
    for (int i = 0; name[i] != '\0'; i ++) {
        if (((name[i] >= 'a' && name[i] <= 'z') || name[i] == ' ') == false)
            return false;
    }
    return true;
}

bool UniqueCountryName(Eurovision eurovision, int stateId) {
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        if (ADTCountryReaderID(country) == stateId) {
            return false;
        }
    }
    return true;
}

bool UniqueJudgeName(Eurovision eurovision, int judgeId) {

    UniqueId *ptr = malloc(sizeof(UniqueId));
    LIST_FOREACH(Judge, judge, eurovision->list_of_judges) {
        ADTJudgeReader(judge, ptr, NULL, NULL);
        if (*ptr == judgeId) {
            free(ptr);
            return false;
        }
    }
    free(ptr);
    return true;
}

bool AssociatedCountryId(Eurovision eurovision, int *judgeResults) {
    if (eurovision->initialization->list_of_countries == false) {
        return false;
    }

    for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
        if (UniqueCountryName(eurovision, judgeResults[i])) {
            return false;
        }
    }
    return true;
}

/*
 * must use this because you can't cast int->void*->int
 * dont forget to free the string from memory if you
 * dont use cast it back to int
 */
char *IntToString(int num) {
    char *result;
    result = (char *) malloc(sizeof(char) * MAX_NUMBER_LENGTH);
    sprintf(result, "%d", num);
    return result;
}

int StringToInt(char *str) {
    int number = (int) strtol(str, (char **) NULL, MAX_NUMBER_LENGTH);
    free(str);
    return number;
}

int StringToIntNoFree(char *str) {
    int number = (int) strtol(str, (char **) NULL, MAX_NUMBER_LENGTH);
    return number;
}

EurovisionResult VotesTest(Eurovision eurovision, int stateGiver,
                           int stateTaker) {
    if (! eurovision) {
        return EUROVISION_NULL_ARGUMENT;
    }
    if (stateGiver < 0 || stateTaker < 0) {
        return EUROVISION_INVALID_ID;
    }
    if (stateGiver == stateTaker) {
        return EUROVISION_SAME_STATE;
    }
    if (UniqueCountryName(eurovision, stateGiver) || UniqueCountryName(eurovision, stateTaker)) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    return EUROVISION_SUCCESS;
}

ListElement copyString(ListElement str) {
    /* char *copy = strdup((Name) str);
     if (! copy) {
         return NULL;
     }
     return copy;
     */

    char *copy = malloc(strlen((Name) str) + 1);
    return copy ? strcpy(copy, (Name) str) : NULL;
}


void freeString(Element str) {
    free(str);
}


void CalculatePointsFromJudge(Eurovision eurovision) {
    Data *judge_point = malloc(sizeof(Data) * RANKED_COUNTRIES);
    LIST_FOREACH(Judge, judge, eurovision->list_of_judges) {
        ADTJudgeReader(judge, NULL, NULL, judge_point);
        for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
            LIST_FOREACH(Country, country, eurovision->list_of_countries) {
                if (judge_point[i] == ADTCountryReaderID(country)) {
                    ADTCountryPreAvreageJudgeUpdate(country, ADTCountryPreAvreageJudgeReader(country) + JudgeRank(i));
                }
            }
        }
    }
    free(judge_point);
}


int JudgeRank(int number) { // as specified in jude ranking PDF
    switch (number) {
        case 0:
            return 12;
        case 1:
            return 10;
        case 2:
            return 8;
        case 3:
            return 7;
        case 4:
            return 6;
        case 5:
            return 5;
        case 6:
            return 4;
        case 7:
            return 3;
        case 8:
            return 2;
        case 9:
            return 1;
        default:
            return 0;

    }
}

EurovisionResult CalculatePointsFromPeople(Eurovision eurovision, int amount_of_countries) {

    int *ptr = (int *) malloc(ARRAY_2D * amount_of_countries * sizeof(int));
    if (! ptr) {
        return EUROVISION_OUT_OF_MEMORY;
    }
    // 0 till amount_of_countries country unique_id .
    // amount_of_countries till amount_of_countries*2 the value for each
    int i = 0;
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        ptr[i] = ADTCountryReaderID(country);
        i ++;
    } //stores ok

    /*
     * we calculate for each country the score she gives from 0 to 12
     */
    if (CalculatePointsFromCountry(eurovision, ptr, amount_of_countries) == EUROVISION_NULL_ARGUMENT) {
        return EUROVISION_NULL_ARGUMENT;
    }


    free(ptr);
    return EUROVISION_SUCCESS;
}

EurovisionResult CalculatePointsFromCountry(Eurovision eurovision, int *ptr, int array_length) {
    int points_from_country, points_to_country;
    for (int j = 0; j < array_length; ++ j) {
        for (int k = 0; k < array_length; ++ k) {
            ptr[array_length + k] = 0;
        }
        LIST_FOREACH(Points, points, eurovision->list_of_points) {
            List list = ADTPointsReader(points);
            points_from_country = StringToIntNoFree(listGetFirst(list));
            points_to_country = StringToIntNoFree(listGetNext(list));
            listDestroy(list);
            if (ptr[j] == points_from_country) {
                for (int i = 0; i < array_length; ++ i) {
                    if (ptr[i] == points_to_country)
                        ptr[i + array_length] ++;
                }
            }
        }
        // each country to whom the points had been given (works)
        int temp = MaxInArray(ptr, array_length, array_length);
        for (int index = 0; index < array_length; ++ index) {
            if (ptr[index + array_length] == temp && temp != 0) {
                LIST_FOREACH(Country, state, eurovision->list_of_countries) {
                    if (ADTCountryReaderID(state) == ptr[j]) {
                        Name str = IntToString(ptr[index]);
                        if (listInsertLast(ADTCountryGaveMaxPointsReader(state), str) != LIST_SUCCESS) {
                            return EUROVISION_NULL_ARGUMENT;
                        }
                        free(str);
                    }
                }
                /* printf("\n the giver :%d gave :%d the follwing amount of points:%d ", ptr[j], ptr[index],
                        ptr[index + array_length]);
                 printf("\n"); */ //array interpretation
            }
        }
        AddPointsToTheNext(eurovision, ptr, array_length);
    }
    return EUROVISION_SUCCESS;
}

int MaxInArray(int *array, int array_length, int array_offset) {
    int temp = 0;
    for (int i = 0; i < array_length; ++ i) {
        if (array[i + array_offset] > temp) {
            temp = array[i + array_offset];
        }
    }
    return temp;
}

/*old code used for refrance
EurovisionResult CalculateFriendlyCountry(Eurovision eurovision, int *ptr, int country, int array_length) {
    int temp = 0, index = 0;
    for (int j = 0; j < array_length; ++ j) {
        if (ptr[j + array_length] > temp) {
            temp = ptr[j + array_length];
            index = j;
        }
        if (ptr[j + array_length] == temp) {
            if (ptr[j] < ptr[index]) {
                temp = ptr[j + array_length];
                index = j;
            }
        }
    }
    if (temp != 0) { //ptr[country] gave to ptr[j] 12 points
        LIST_FOREACH(Country, state, eurovision->list_of_countries) {
            if (ptr[country] == state->unique_id) {
                if (listInsertLast(state->gave_max_points, IntToString(ptr[index])) != LIST_SUCCESS) {
                    return EUROVISION_NULL_ARGUMENT;
                }
            }
        }
    }

    return EUROVISION_SUCCESS;
}
*/

void AddPointsToTheNext(Eurovision eurovision, int *ptr, int array_length) {
    int j = 0, temp = 0, index = 0;
    for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
        for (j = 0; j < array_length; ++ j) {
            if (ptr[j + array_length] > temp) {
                temp = ptr[j + array_length];
                index = j;
            }
            if (ptr[j + array_length] == temp) {
                if (ptr[j] < ptr[index]) {
                    temp = ptr[j + array_length];
                    index = j;
                }
            }
        }

        //we found the place with the higest score;
        //   printf("\nthe highest score is: %d", ptr[index + array_length]);
        if (temp != 0) {
            LIST_FOREACH(Country, country, eurovision->list_of_countries) {
                if (ADTCountryReaderID(country) == ptr[index]) {
                    ADTCountryPreAvreagePeopleUpdate(country, ADTCountryPreAvreagePeopleReader(country) + JudgeRank(i));
                }
            }
            ptr[index + array_length] = 0; //so we wont check it again
            temp = 0;
            index = 0;
        }

    }
    for (j = 0; j < array_length; ++ j) {
        ptr[j + array_length] = 0;
    } // just in case

}

void CalculateAverageScore(Eurovision eurovision, int number_of_jadges, int number_of_countries, int audiencePercent) {
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        if (eurovision->initialization->list_of_points == true) {
            ADTCountryPostAvreagePeopleUpdate(country, (ADTCountryPreAvreagePeopleReader(country)) /
                                                       (double) (number_of_countries - THE_COUNTRY_ITSELF));
            ADTCountryPostAvreagePeopleUpdate(country, NumberRound(ADTCountryPostAvreagePeopleReader(country)));
        }
        if (eurovision->initialization->list_of_judges == true && number_of_jadges != 0) {
            ADTCountryPostAvreageJudgeUpdate(country,
                                             ADTCountryPreAvreageJudgeReader(country) / ((double) (number_of_jadges)));


            ADTCountryPostAvreageJudgeUpdate(country, NumberRound(ADTCountryPostAvreageJudgeReader(country)));
        }
        ADTCountryFinalScoreUpdate(country,
                                   (ADTCountryPostAvreagePeopleReader(country)) *
                                   ((double) audiencePercent / (double) MAX_PRACENT) +
                                   (ADTCountryPostAvreageJudgeReader(country)) *
                                   (double) ((double) WHOLE_NUMBER - (double) (audiencePercent / MAX_PRACENT)));
        ADTCountryFinalScoreUpdate(country, ADTCountryFinalScoreReader(country));

    }

}

double NumberRound(double number) {
    /*
     double result = (int) (number * 100);
     result = (double) (result / 100.0);
     return result;
*/

    return number;
}

List MakeWinnersList(Eurovision eurovision, int amount_of_countries) {
    List list = listCreate(copyString, freeString);
    if (! list) {
        return NULL;
    }
    Country temp_country = AllocateCountry(NULL, NULL, IntToString(INT_MAX));
    Country ptr = temp_country;
    for (int i = 0; i < amount_of_countries; ++ i) {
        LIST_FOREACH(Country, country, eurovision->list_of_countries) {
            if (ADTCountryCalculatedPlaceReader(country) == false) {
                if (ADTCountryFinalScoreReader(country) > ADTCountryFinalScoreReader(temp_country)) {
                    temp_country = country;
                }
                if (ADTCountryFinalScoreReader(country) == ADTCountryFinalScoreReader(temp_country)) {
                    if (ADTCountryReaderID(country) < ADTCountryReaderID(temp_country)) {
                        temp_country = country;
                    }
                    if (ADTCountryFinalScoreReader(country) == 0 && ADTCountryNameReader(temp_country) == NULL) {
                        temp_country = country;
                    }
                }

            }
        }
        if (listInsertLast(list, ADTCountryNameReader(temp_country)) != LIST_SUCCESS) {
            return NULL;

        }
        ADTCountryCalculatedPlaceUpdate(temp_country, true); // we use this flag in order not to check the country again
        temp_country = ptr;
    }

    FreeCountry(ptr);
    return list;
}


Name ConnectStrings(const char *s1, const char *s2) {
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    if (! result) {
        return NULL;
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

Name ConnectThreeStrings(const char *str1, const char *str2, const char *str3) {
    Name first_word, second_word;
    first_word = ConnectStrings(str1, str2);
    second_word = ConnectStrings(first_word, str3);
    free(first_word);
    return second_word;
}


List ListOfStringsFilter(List list) {
    //List copy_of_list =listCopy(list);
    int list_size = 0;
    List new_list = listCreate(copyString, freeString);
    listInsertFirst(new_list, listGetFirst(list));
    LIST_FOREACH(Name, name, list) {
        LIST_FOREACH(Name, name_copy, new_list) {

            if (strcmp(name, name_copy) != 0) {
                list_size ++;
            }
            if (list_size == listGetSize(new_list)) {
                if (listInsertLast(new_list, name) != LIST_SUCCESS) {
                    return NULL;
                }
            }

        }
        list_size = 0;
    }

    listDestroy(list);
    return new_list;
}

/*
List ListSort(List list) {
    List new_list;
    Name name = listGetFirst(list);
    Name str;
    listRemoveCurrent(list);
    LIST_FOREACH(Name, str, list) {

    }


    return new_list;
}

Name CutString(Name str) {
    Name temp = strstr(str, " ");

}
*/

List FilterLexicographicFilter(List list) {
    int array_length = listGetSize(list);
    Name *array_of_strings = (Name *) malloc(sizeof(Name) * array_length);
    if (! array_of_strings) {
        return NULL;
    }
    int index = 0;
    LIST_FOREACH(Name, name, list) {
        array_of_strings[index] = copyString(name);
        if (! array_of_strings[index]) {
            return NULL;
        }
        index ++;
    }
    listDestroy(list);
    StringsQuickSort(array_of_strings, array_length); // works ok
    List new_list = listCreate(copyString, freeString);
    for (int i = 0; i < array_length; ++ i) {
        if (listInsertLast(new_list, array_of_strings[i]) != LIST_SUCCESS) {
            return NULL;
        }
    }
    for (int j = 0; j < array_length; ++ j) {
        free(array_of_strings[j]);
    }
    free(array_of_strings);
    return new_list;

}

void SwapStringPointers(char **str1, char **str2) {
    char *tmp = *str1;
    *str1 = *str2;
    *str2 = tmp;
}

void StringsQuickSort(char *str[], unsigned int length) {
    unsigned int i, pivot = 0;

    if (length <= 1)
        return;
    SwapStringPointers(str + ((unsigned int) rand() % length), str + length - 1);
    for (i = 0; i < length - 1; ++ i) {
        if (strcmp(str[i], str[length - 1]) < 0)
            SwapStringPointers(str + i, str + pivot ++);
    }
    SwapStringPointers(str + pivot, str + length - 1);
    StringsQuickSort(str, pivot ++);
    StringsQuickSort(str + pivot, length - pivot);
}


List FilterListForFriends(List list) {
    if (listGetSize(list) == 0) {
        return list;
    }
    list = ListOfStringsFilter(list);
    if (! list) {
        return NULL;
    }

    list = FilterLexicographicFilter(list);
    if (! list) {
        return NULL;
    }

    return list;
}


void MassFree(Element e1, Element e2, Element e3, Element e4, Element e5) {
    if (e1) {
        free(e1);
    }
    if (e2) {
        free(e2);
    }
    if (e3) {
        free(e3);
    }
    if (e4) {
        free(e4);
    }
    if (e5) {
        free(e5);
    }
}







