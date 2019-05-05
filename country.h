#ifndef MATAM1_COUNTRY_H
#define MATAM1_COUNTRY_H

#include "eurovision.h"
#include "namelib.h"
#include "list.h"


typedef struct country_t *Country;

/*
 * creats new Country object for initial use in the program
 */
Country AllocateCountry(Element country_name, Element song_name, Element unique_id);
/*
 * copy function for the country object useful for ADT
 */
ListElement CopyCountry(Element country_struct);
/*
 * free function for country object
 */
void FreeCountry(Element country);
/*
 * must use this function after you calculated the place of
 * a country in the eurovision
 */
void AfterRunClean(Eurovision eurovision);


/*
* all the functions that start with ADT
 * are simple return\place function
 * the location of the action is in the function name
*/
UniqueId ADTCountryReaderID(Element country);

List ADTCountryReadMaxList(Element country);

Name ADTCountryNameRead(Element country);

UniqueId ADTCountryPreAvreageJudgeRead(Element country);

void ADTCountryPreAvreageJudgeUpdate(Element country, UniqueId pre_average_points_judge);

List ADTCountryGaveMaxPointsRead(Element country);

void ADTCountryPreAvreagePeopleUpdate(Element country, UniqueId pre_average_points);

UniqueId ADTCountryPreAvreagePeopleRead(Element country);

void ADTCountryPostAvreagePeopleUpdate(Element country, Score post_average_points);

Score ADTCountryPostAvreagePeopleRead(Element country);

Score ADTCountryPostAvreageJudgeRead(Element country);

void ADTCountryPostAvreageJudgeUpdate(Element country, Score post_average_points_judge);

void ADTCountryFinalScoreUpdate(Element country, Score final_score);

Score ADTCountryFinalScoreRead(Element country);

void ADTCountryCalculatedPlaceUpdate(Element country, bool calculated_place);

bool ADTCountryCalculatedPlaceRead(Element country);

void ADTCountryUpdateID(Element country, UniqueId id);

void ADTCountryNameNULL(Element country);

void ADTDestroyWinnersList(Element country);

#endif //MATAM1_COUNTRY_H
