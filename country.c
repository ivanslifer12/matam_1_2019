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


Country AllocateCountry(Element country_name, Element song_name, Element unique_id) {
    Country created_country = malloc(sizeof(*created_country));
    if (! created_country) {
        return NULL;
    }

    created_country->unique_id = StringToInt((Name) unique_id);
    created_country->country_name = strdup((CName) country_name);
    if (! created_country->country_name) {
        return NULL;
    }
    created_country->song_name = strdup((CName) song_name);
    if (! created_country->song_name) {
        return NULL;
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
    created_country->country_name = strdup(((Country) country_struct)->country_name);
    if (! created_country->country_name) {
        return NULL;
    }
    created_country->song_name = strdup(((Country) country_struct)->song_name);
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


