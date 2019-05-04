#ifndef MATAM1_POINTS_H
#define MATAM1_POINTS_H

#include "namelib.h"
#include "eurovision.h"
#include "list.h"


typedef struct points_t *Points;


EurovisionResult AllocatePoints(Points points, Element points_from_country, Element points_to_country);

Points CreatePointsStruct( Element points_from_country, Element points_to_country);

ListElement CopyPoints(Element points_struct);

void FreePoints(Element points_struct);


List ADTPointsReader(Element points);



#endif //MATAM1_POINTS_H
