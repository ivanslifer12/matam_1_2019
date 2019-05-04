#include "eurovision.h"
#include "list.h"
#include "namelib.h"
#include "stdlib.h"
#include "points.h"
#include "stdio.h"
#include "support_functions.h"

struct points_t {
    UniqueId points_from_country;
    UniqueId points_to_country;

};

EurovisionResult AllocatePoints(Points points, Element points_from_country, Element points_to_country) {
    if (points_from_country == NULL || points_to_country == NULL || points == NULL) {
        return EUROVISION_NULL_ARGUMENT;
    }
    if (*((UniqueId *) points_from_country) <= 0 || *((UniqueId *) points_to_country)) {
        return EUROVISION_INVALID_ID;
    }
    points->points_from_country = *((UniqueId *) points_from_country);
    points->points_to_country = *((UniqueId *) points_to_country);

    return EUROVISION_SUCCESS;
}


Points CreatePointsStruct(Element points_from_country, Element points_to_country) {
    Points created_points = malloc(sizeof(*created_points));
    if (!created_points) {
        return NULL;
    }
    created_points->points_to_country = StringToInt(points_to_country);
    created_points->points_from_country = StringToInt(points_from_country);
    return created_points;

}

List ADTPointsReader(Element points) {
    Points temp = (Points) points;
    List list = listCreate(copyString, freeString);
    Name points_from_country = IntToString(temp->points_from_country), points_to_country = IntToString(
            temp->points_to_country);
    if(listInsertFirst(list, points_from_country)!=LIST_SUCCESS){
        return NULL;
    }
    if(listInsertLast(list, points_to_country)!=LIST_SUCCESS){
        return NULL;
    }
    free(points_from_country);
    free(points_to_country);
    return list;

}

ListElement CopyPoints(Element points_struct) {
    Points created_points = malloc(sizeof(*created_points));
    if (!created_points) {
        return NULL;
    }
    created_points->points_to_country = (*(Points) points_struct).points_to_country;
    created_points->points_from_country = (*(Points) points_struct).points_from_country;
    return created_points;

}

void FreePoints(Element points_struct) {
    if (points_struct == NULL) {
        return;
    }
    free((Points) points_struct);

}


