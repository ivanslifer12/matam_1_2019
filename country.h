#ifndef MATAM1_COUNTRY_H
#define MATAM1_COUNTRY_H

#include "eurovision.h"
#include "namelib.h"
#include "judge.h"
#include "list.h"


typedef struct country_t *Country;

Country AllocateCountry(Element country_name, Element song_name, Element unique_id);

ListElement CopyCountry(Element country_struct);

void FreeCountry(Element country);

void AfterRunClean(Eurovision eurovision);

void ADTCountryReaderMath(Element country, UniqueId* pre_average_points, UniqueId* pre_average_points_judge,
                          Score* post_average_points, Score* post_average_points_judge, Score* final_score,
                          bool* calculated_place);

UniqueId ADTCountryReaderID(Element country);

List ADTCountryReaderMaxList(Element country);

Name ADTCountryNameReader(Element country);


#endif //MATAM1_COUNTRY_H
