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
    Score pre_average_points;
    Score post_average_points;
    Score pre_average_points_judge;
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


    if (listInsertLast(eurovision->list_of_countries,
                       AllocateCountry((Element) stateName, (Element) songName, (Element) IntToString(stateId))) ==
        //test for leak
        LIST_OUT_OF_MEMORY) {
        return EUROVISION_OUT_OF_MEMORY;
    }
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
    if (! AssociatedCountryId(eurovision, judgeResults)) {
        return EUROVISION_STATE_NOT_EXIST;
    }

    if (listInsertLast(eurovision->list_of_judges,
                       AllocateJudge((Element) IntToString(judgeId), (Element) judgeName, (Element) judgeResults)) ==
        //test leak
        LIST_OUT_OF_MEMORY) {
        return EUROVISION_OUT_OF_MEMORY;
    }

    eurovision->initialization->list_of_judges = true;
    return EUROVISION_SUCCESS;
}

EurovisionResult eurovisionAddVote(Eurovision eurovision, int stateGiver,
                                   int stateTaker) {
    int temp;
    if ((temp = VotesTest(eurovision, stateGiver, stateTaker)) == EUROVISION_SUCCESS) {
        if (listInsertLast(eurovision->list_of_points,
                           CreatePointsStruct(IntToString(stateGiver), IntToString(stateTaker))) ==
            //test leak
            LIST_OUT_OF_MEMORY) {
            return EUROVISION_OUT_OF_MEMORY;
        }
        eurovision->initialization->list_of_points = true;
        return EUROVISION_SUCCESS;
    }
    return temp;
}

EurovisionResult eurovisionRemoveVote(Eurovision eurovision, int stateGiver,
                                      int stateTaker) {
    int temp;
    if ((temp = VotesTest(eurovision, stateGiver, stateTaker)) == EUROVISION_SUCCESS) {
        if (eurovision->initialization->list_of_points == true) {
            LIST_FOREACH(Points, points, eurovision->list_of_points) {
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
    return temp;
}


EurovisionResult eurovisionRemoveJudge(Eurovision eurovision, int judgeId) {
    if (! eurovision) {
        return EUROVISION_NULL_ARGUMENT;
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
            if (listGetFirst(eurovision->list_of_points) == NULL) {
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
    if (UniqueCountryName(eurovision, stateId)) {
        return EUROVISION_STATE_NOT_EXIST;
    }
    if (eurovision->initialization->list_of_points == true) {
        LIST_FOREACH(Points, points, eurovision->list_of_points) {
            if (points->points_to_country == stateId || points->points_from_country == stateId) {
                listRemoveCurrent(eurovision->list_of_points);
            }
        }
    }
    if (listGetFirst(eurovision->list_of_points) == NULL) {
        eurovision->initialization->list_of_points = false;
    }
    if (eurovision->initialization->list_of_judges == true) {
        LIST_FOREACH(Judge, judge, eurovision->list_of_judges) {
            for (int i = 0; i < RANKED_COUNTRIES; ++ i) {
                if (judge->judge_points[i] == stateId) {
                    listRemoveCurrent(eurovision->list_of_judges);
                    break;
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
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        LIST_FOREACH(Name, name, country->gave_max_points) {
            LIST_FOREACH(Country, state, copy_country) {
                if (StringToIntNoFree(name) == state->unique_id) {
                    LIST_FOREACH(Name, copy_name, state->gave_max_points) {
                        if (StringToIntNoFree(copy_name) == country->unique_id) {
                            if (strcmp(country->country_name, state->country_name) >
                                0) { //state->country_name should be first
                                if (listInsertLast(list,
                                                   ConnectStrings(state->country_name,
                                                                  ConnectStrings(" - ", country->country_name))) !=
                                    LIST_SUCCESS) {
                                    return NULL;
                                }
                            }
                            if (strcmp(country->country_name, state->country_name) < 0) {

                                if (listInsertLast(list,
                                                   ConnectStrings(country->country_name,
                                                                  ConnectStrings(" - ", state->country_name))) !=
                                    LIST_SUCCESS) {
                                    return NULL;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    list = ListOfStringsFilter(list);
    if (! list) {
        return NULL;
    }

    list = FilterLexicographicFilter(list);
    if (! list) {
        return NULL;
    }
    listDestroy(copy_country);
    return list;
}

/*
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
    LIST_FOREACH(Country,country,eurovision->list_of_countries){
        LIST_FOREACH(Country,copy_country_iterator,copy_country){
            LIST_FOREACH(Name,name,copy_country_iterator->gave_max_points){
                if(country->unique_id==StringToIntNoFree(name)){

                }
            }
    }
    }

}
*/























//
