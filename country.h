#ifndef MATAM1_COUNTRY_H
#define MATAM1_COUNTRY_H

#include "eurovision.h"
#include "namelib.h"
#include "list.h"


typedef struct country_t *Country;



Country AllocateCountry(Element country_name, Element song_name, Element unique_id);

ListElement CopyCountry(Element country_struct);

void FreeCountry(Element country);

void AfterRunClean(Eurovision eurovision);


UniqueId ADTCountryReaderID(Element country);

List ADTCountryReadMaxList(Element country);

Name ADTCountryNameRead(Element country);

UniqueId ADTCountryPreAvreageJudgeRead (Element country);

void ADTCountryPreAvreageJudgeUpdate (Element country,UniqueId pre_average_points_judge);

List ADTCountryGaveMaxPointsRead (Element country);

void ADTCountryPreAvreagePeopleUpdate (Element country,UniqueId pre_average_points);

UniqueId ADTCountryPreAvreagePeopleRead (Element country);

void ADTCountryPostAvreagePeopleUpdate (Element country,Score post_average_points);

Score ADTCountryPostAvreagePeopleRead (Element country);

Score ADTCountryPostAvreageJudgeRead (Element country);

void ADTCountryPostAvreageJudgeUpdate (Element country,Score post_average_points_judge);

void ADTCountryFinalScoreUpdate (Element country,Score final_score);

Score ADTCountryFinalScoreRead (Element country);

void ADTCountryCalculatedPlaceUpdate(Element country,bool calculated_place);
bool ADTCountryCalculatedPlaceRead(Element country);

void ADTCountryUpdateID(Element country,UniqueId id);
void ADTCountryNameNULL(Element country);
void ADTDestroyWinnersList(Element country);
#endif //MATAM1_COUNTRY_H
