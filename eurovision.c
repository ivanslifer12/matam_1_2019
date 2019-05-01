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

struct initialization_t {
    bool list_of_countries;
    bool list_of_judges;
    bool list_of_points;

};

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

struct judge_t {
    UniqueId unique_id;
    Name judge_name;
    Data judge_points[RANKED_COUNTRIES];

};

struct points_t {
    UniqueId points_from_country;
    UniqueId points_to_country;

};

struct eurovision_t {
    List list_of_countries;
    List list_of_judges;
    List list_of_points;
    Initialization initialization;

};


Eurovision eurovisionCreate() {
    Eurovision eurovision = malloc(sizeof(*eurovision));
    if (! eurovision) {
        return NULL;
    }
    eurovision->initialization = malloc(sizeof(*eurovision->initialization));
    if (! eurovision->initialization) {
        return NULL;
    }

    eurovision->list_of_countries = listCreate(CopyCountry, FreeCountry);
    if (! eurovision->list_of_countries) {
        return NULL;
    }
    eurovision->list_of_judges = listCreate(CopyJudge, FreeJudge);
    if (! eurovision->list_of_judges) {
        return NULL;
    }
    eurovision->list_of_points = listCreate(CopyPoints, FreePoints);
    if (! eurovision->list_of_points) {
        return NULL;
    }

    eurovision->initialization->list_of_countries = false;
    eurovision->initialization->list_of_judges = false;
    eurovision->initialization->list_of_points = false;
    return eurovision;
}

void eurovisionDestroy(Eurovision eurovision) {
    if (! eurovision) {
        return;
    }
    listDestroy(eurovision->list_of_points);
    listDestroy(eurovision->list_of_judges);
    listDestroy(eurovision->list_of_countries);
    free(eurovision->initialization);
    free(eurovision);
}

EurovisionResult eurovisionAddState(Eurovision eurovision, int stateId,
                                    const char *stateName, const char *songName) {

    if (! eurovision || ! stateName || ! songName) {
        return EUROVISION_NULL_ARGUMENT;
    }

    if (stateId < 0) {
        return EUROVISION_INVALID_ID;
    }

    if (! (ConstNameTest(stateName) && ConstNameTest(songName))) {
        return EUROVISION_INVALID_NAME;
    }
    if (eurovision->initialization->list_of_countries == true) { // need to test only if list isn't empty
        if (! UniqueCountryName(eurovision, stateId)) {
            return EUROVISION_STATE_ALREADY_EXIST;
        }
    }

    Country temp = AllocateCountry((Element) stateName, (Element) songName, (Element) IntToString(stateId));
    if (listInsertLast(eurovision->list_of_countries, temp) == LIST_OUT_OF_MEMORY) {
        return EUROVISION_OUT_OF_MEMORY;
    }
    FreeCountry(temp);
    eurovision->initialization->list_of_countries = true;
    return EUROVISION_SUCCESS;

}

EurovisionResult eurovisionAddJudge(Eurovision eurovision, int judgeId,
                                    const char *judgeName,
                                    int *judgeResults) {
    if (! eurovision || ! judgeName || ! judgeResults) {
        return EUROVISION_NULL_ARGUMENT;
    }
    if (judgeId < 0) {
        return EUROVISION_INVALID_ID;
    }
    if (eurovision->initialization->list_of_countries == false) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
        if (judgeResults[i] < 0) {
            return EUROVISION_INVALID_ID;
        }
    }
    if (! ConstNameTest(judgeName)) {
        return EUROVISION_INVALID_NAME;
    }
    if (! UniqueJudgeName(eurovision, judgeId)) {
        return EUROVISION_JUDGE_ALREADY_EXIST;
    }
    if (AssociatedCountryId(eurovision, judgeResults) == false) {
        return EUROVISION_STATE_NOT_EXIST;
    }

    Judge temp = AllocateJudge((Element) IntToString(judgeId), (Element) judgeName, (Element) judgeResults);
    if (! temp) {
        return EUROVISION_OUT_OF_MEMORY;
    }
    if (listInsertLast(eurovision->list_of_judges, temp) == LIST_OUT_OF_MEMORY) {
        return EUROVISION_OUT_OF_MEMORY;
    }
    FreeJudge(temp);
    eurovision->initialization->list_of_judges = true;
    return EUROVISION_SUCCESS;
}

EurovisionResult eurovisionAddVote(Eurovision eurovision, int stateGiver,
                                   int stateTaker) {
    int temp;
    if ((temp = VotesTest(eurovision, stateGiver, stateTaker)) == EUROVISION_SUCCESS) {
        if (temp != EUROVISION_SUCCESS) {
            return temp;
        }
        Points ptr = CreatePointsStruct(IntToString(stateGiver), IntToString(stateTaker));
        if (listInsertLast(eurovision->list_of_points, ptr) != LIST_SUCCESS) {
            return EUROVISION_OUT_OF_MEMORY;
        }
        FreePoints(ptr);
        eurovision->initialization->list_of_points = true;
        return EUROVISION_SUCCESS;
    }
    return temp;
}

EurovisionResult eurovisionRemoveVote(Eurovision eurovision, int stateGiver,
                                      int stateTaker) {
    int temp;
    if (eurovision->initialization->list_of_points == false) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    if ((temp = VotesTest(eurovision, stateGiver, stateTaker)) == EUROVISION_SUCCESS) {
        if (eurovision->initialization->list_of_points == true) {
            int size_of_list = listGetSize(eurovision->list_of_points), counter = 0;
            for (int i = 0; i < size_of_list; ++ i) { // listRemoveCurrent breaks LIST_FOREACH
                if (counter == listGetSize(eurovision->list_of_points)) { // to reduce run time
                    break;
                } else {
                    counter = 0;
                }
                LIST_FOREACH(Points, points, eurovision->list_of_points) {
                    counter ++;
                    if (points->points_from_country == stateGiver && points->points_to_country == stateTaker) {
                        listRemoveCurrent(eurovision->list_of_points);
                        if (listGetFirst(eurovision->list_of_points) == NULL) { // if the list gets empty
                            eurovision->initialization->list_of_points = false;
                        }
                        return EUROVISION_SUCCESS;
                    }
                }

            }
        }
    }
    return temp;
}


EurovisionResult eurovisionRemoveJudge(Eurovision eurovision, int judgeId) {
    if (! eurovision) {
        return EUROVISION_NULL_ARGUMENT;
    }
    if (eurovision->initialization->list_of_judges == false) {
        return EUROVISION_JUDGE_NOT_EXIST;
    }
    if (judgeId < 0) {
        return EUROVISION_INVALID_ID;
    }
    if (UniqueJudgeName(eurovision, judgeId)) {
        return EUROVISION_JUDGE_NOT_EXIST;
    }
    LIST_FOREACH(Judge, judge, eurovision->list_of_judges) {
        if (judge->unique_id == judgeId) {
            listRemoveCurrent(eurovision->list_of_judges);
            if (listGetFirst(eurovision->list_of_points) == NULL) { // when the list is empty
                eurovision->initialization->list_of_points = false;
            }
            return EUROVISION_SUCCESS;
        }
    }

    return EUROVISION_SUCCESS;
}


EurovisionResult eurovisionRemoveState(Eurovision eurovision, int stateId) {
    if (! eurovision) {
        return EUROVISION_NULL_ARGUMENT;
    }
    if (stateId < 0) {
        return EUROVISION_INVALID_ID;
    }
    if (eurovision->initialization->list_of_countries == false) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    if (UniqueCountryName(eurovision, stateId)) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    if (eurovision->initialization->list_of_points == true) {
        int size_of_list = listGetSize(eurovision->list_of_points);
        int counter = 0;
        for (int i = 0; i < size_of_list; ++ i) { // listRemoveCurrent breaks LIST_FOREACH
            if (counter == listGetSize(eurovision->list_of_points)) { // to reduce run time
                break;
            } else {
                counter = 0;
            }
            LIST_FOREACH(Points, points, eurovision->list_of_points) {
                counter ++;
                if (points->points_to_country == stateId || points->points_from_country == stateId) {
                    listRemoveCurrent(eurovision->list_of_points);

                }
            }
        }
    }
    if (listGetFirst(eurovision->list_of_points) == NULL) {
        eurovision->initialization->list_of_points = false;
    }
    if (eurovision->initialization->list_of_judges == true) {
        int size_of_list = listGetSize(eurovision->list_of_judges);
        int counter = 0;
        for (int i = 0; i < size_of_list; ++ i) { // listRemoveCurrent breaks LIST_FOREACH
            if (counter == listGetSize(eurovision->list_of_judges)) { // to reduce run time
                break;
            } else {
                counter = 0;
            }
            LIST_FOREACH(Judge, judge, eurovision->list_of_judges) {
                counter ++;
                for (int j = 0; j < RANKED_COUNTRIES; ++ j) {
                    if (judge->judge_points[j] == stateId) { //index bug was here :(
                        listRemoveCurrent(eurovision->list_of_judges);
                        break;
                    }
                }
            }
        }
    }
    if (listGetFirst(eurovision->list_of_judges) == NULL) {
        eurovision->initialization->list_of_judges = false;
    }
    if (eurovision->initialization->list_of_countries == true) {
        LIST_FOREACH(Country, country, eurovision->list_of_countries) {
            if (country->unique_id == stateId) {
                listRemoveCurrent(eurovision->list_of_countries);
                if (listGetFirst(eurovision->list_of_countries) == NULL) {
                    eurovision->initialization->list_of_countries = false;
                }
                return EUROVISION_SUCCESS;
            }
        }
    }
    return EUROVISION_SUCCESS;
}

List eurovisionRunContest(Eurovision eurovision, int audiencePercent) {


    if (audiencePercent < 1 || audiencePercent > 100) {
        return NULL;
    }
    if (eurovision->initialization->list_of_countries == false) {
        return NULL;
    }
    int amount_of_countries = listGetSize(eurovision->list_of_countries), amount_of_judges = listGetSize(
            eurovision->list_of_judges);

    CalculatePointsFromJudge(eurovision);
    if (CalculatePointsFromPeople(eurovision, amount_of_countries) == EUROVISION_OUT_OF_MEMORY) {
        return NULL;
    }
    CalculateAverageScore(eurovision, amount_of_judges, amount_of_countries, audiencePercent);
    List list = MakeWinnersList(eurovision, amount_of_countries);

    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        printf("\nID:%d Score:%f\nPre_people:%d After_People:%f Pre_Judge:%d After_Judge:%f", country->unique_id,
               country->final_score, country->pre_average_points, country->post_average_points,
               country->pre_average_points_judge, country->post_average_points_judge);
    }
    printf("\n");

    return list;


}


List eurovisionRunAudienceFavorite(Eurovision eurovision) {
    if (! eurovision) {
        return NULL;
    }
    int amount_of_countries = listGetSize(eurovision->list_of_countries);
    if (CalculatePointsFromPeople(eurovision, amount_of_countries) != EUROVISION_SUCCESS) {
        return NULL;
    }
    CalculateAverageScore(eurovision, 0, amount_of_countries, 100);
    List list = MakeWinnersList(eurovision, amount_of_countries);
    /*  LIST_FOREACH(Country, country, eurovision->list_of_countries) {
          printf("\nID:%d Score:%f\nPre_people:%d After_People:%f", country->unique_id,
                 country->final_score, country->pre_average_points, country->post_average_points);
      }

      printf("\n");
      */
    return list;
}


List eurovisionRunGetFriendlyStates(Eurovision eurovision) {
    if (! eurovision) {
        return NULL;
    }
    int amount_of_countries = listGetSize(eurovision->list_of_countries);
    if (CalculatePointsFromPeople(eurovision, amount_of_countries) != EUROVISION_SUCCESS) {
        return NULL;
    }
    List list = listCreate(copyString, freeString);
    List copy_country = listCopy(eurovision->list_of_countries);
    if (! list) {
        return NULL;
    }
    Name str = NULL;
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        LIST_FOREACH(Name, name, country->gave_max_points) {
            LIST_FOREACH(Country, state, copy_country) {
                if (StringToIntNoFree(name) == state->unique_id) {
                    LIST_FOREACH(Name, copy_name, state->gave_max_points) {
                        if (StringToIntNoFree(copy_name) == country->unique_id) {
                            if (strcmp(country->country_name, state->country_name) >
                                0) { //state->country_name should be first
                                str = ConnectThreeStrings(state->country_name, " - ", country->country_name);
                                if (listInsertLast(list, str) != LIST_SUCCESS) {
                                    return NULL;
                                }
                                free(str);
                            }
                            if (strcmp(country->country_name, state->country_name) < 0) {
                                str = ConnectThreeStrings(country->country_name, " - ", state->country_name);
                                if (listInsertLast(list, str) != LIST_SUCCESS) {
                                    return NULL;
                                }
                                free(str);
                            }
                        }
                    }
                }
            }
        }
    }
    listDestroy(copy_country);
    list = FilterListForFriends(list);
    return list;

}




















//
