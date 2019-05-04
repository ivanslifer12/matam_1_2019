#include "eurovision.h"
#include "list.h"
#include "namelib.h"
#include "stdlib.h"
#include "country.h"
#include "stdio.h"
#include "support_functions.h"
#include "string.h"

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

struct eurovision_t {
    List list_of_countries;
    List list_of_judges;
    List list_of_points;
    Initialization initialization;

};

void ADTCountryCalculatedPlaceUpdate(Element country,bool calculated_place){
    ((Country)country)->calculated_place=calculated_place;
}
bool ADTCountryCalculatedPlaceReader(Element country){
    return ((Country)country)->calculated_place;
}

void ADTCountryFinalScoreUpdate (Element country,Score final_score){
    ((Country)country)->final_score=final_score;
}

Score ADTCountryFinalScoreReader (Element country){
    return ((Country)country)->final_score;

}

void ADTCountryPostAvreagePeopleUpdate (Element country,Score post_average_points){
    ((Country)country)->post_average_points=post_average_points;
}

Score ADTCountryPostAvreagePeopleReader (Element country){
    return ((Country)country)->post_average_points;

}

Score ADTCountryPostAvreageJudgeReader (Element country){
    return ((Country)country)->post_average_points_judge;
}

void ADTCountryPostAvreageJudgeUpdate (Element country,Score post_average_points_judge){
    ((Country)country)->post_average_points_judge=post_average_points_judge;
}


UniqueId ADTCountryReaderID(Element country) {
    return ((Country)country)->unique_id;
}
Name ADTCountryNameReader(Element country){
    return ((Country)country)->country_name;
}

void ADTCountryUpdateID(Element country,UniqueId id) {
     ((Country)country)->unique_id=id;
}
void ADTCountryNameNULL(Element country){
    ((Country)country)->country_name=NULL;
}


UniqueId ADTCountryPreAvreageJudgeReader (Element country){
    return ((Country)country)->pre_average_points_judge;
}

List ADTCountryGaveMaxPointsReader (Element country){
    return ((Country)country)->gave_max_points;
}

void ADTCountryPreAvreageJudgeUpdate (Element country,UniqueId pre_average_points_judge){
    ((Country)country)->pre_average_points_judge=pre_average_points_judge;
}

void ADTCountryPreAvreagePeopleUpdate (Element country,UniqueId pre_average_points){
    ((Country)country)->pre_average_points=pre_average_points;
}

UniqueId ADTCountryPreAvreagePeopleReader (Element country){
    return ((Country)country)->pre_average_points;
}


List ADTCountryReaderMaxList(Element country){

    return ((Country)country)->gave_max_points;
}



Country AllocateCountry(Element country_name, Element song_name, Element unique_id) {
    Country created_country = malloc(sizeof(*created_country));
    if (! created_country) {
        return NULL;
    }

    created_country->unique_id = StringToInt((Name) unique_id);
    if(country_name==NULL){
        created_country->country_name=NULL;
    }
    else {
        created_country->country_name = copyString(country_name);
        if (! created_country->country_name) {
            return NULL;
        }
    }
    if(song_name==NULL) {
      created_country->song_name=NULL;
    }
    else{
        created_country->song_name = copyString(song_name);
        if (! created_country->song_name) {
            return NULL;
        }
    }
    created_country->pre_average_points = 0;
    created_country->pre_average_points_judge = 0;
    created_country->post_average_points_judge = 0;
    created_country->post_average_points = 0;
    created_country->final_score = 0;
    created_country->calculated_place = false;
    created_country->gave_max_points = listCreate(copyString, freeString);
    return created_country;

}

ListElement CopyCountry(Element country_struct) {
    Country created_country = malloc(sizeof(*created_country));
    if (! created_country) {
        return NULL;
    }
    created_country->calculated_place = ((Country) country_struct)->calculated_place;
    created_country->final_score = ((Country) country_struct)->final_score;
    created_country->unique_id = ((Country) country_struct)->unique_id;
    created_country->post_average_points = ((Country) country_struct)->post_average_points;
    created_country->pre_average_points = ((Country) country_struct)->pre_average_points;
    created_country->post_average_points_judge = ((Country) country_struct)->post_average_points_judge;
    created_country->pre_average_points_judge = ((Country) country_struct)->pre_average_points_judge;
    created_country->country_name = copyString(((Country) country_struct)->country_name);
    if (! created_country->country_name) {
        return NULL;
    }
    created_country->song_name = copyString(((Country) country_struct)->song_name);
    if (! created_country->song_name) {
        return NULL;
    }
    created_country->gave_max_points = listCopy(((Country) country_struct)->gave_max_points);

    return created_country;

}


void FreeCountry(Element country) {
    if (country == NULL) {
        return;
    }
    Country temp = country;
    free(temp->song_name);
    free(temp->country_name);
    listDestroy(temp->gave_max_points);
    free(temp);
}

void AfterRunClean(Eurovision eurovision) {
    LIST_FOREACH(Country, country, eurovision->list_of_countries) {
        country->calculated_place = false;
        country->post_average_points_judge = 0;
        country->post_average_points_judge = 0;
        country->pre_average_points = 0;
        country->pre_average_points_judge = 0;
        country->final_score = 0;
        if (country->gave_max_points != NULL) {
            listClear(country->gave_max_points);
        }
    }
}





