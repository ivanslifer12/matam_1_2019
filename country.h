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


#endif //MATAM1_COUNTRY_H
