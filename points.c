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



Points CreatePointsStruct(Element points_from_country, Element points_to_country) {
    Points created_points = malloc(sizeof(*created_points));
    if (!created_points) {
        return NULL;
    }
    created_points->points_to_country = StringToInt(points_to_country);
    created_points->points_from_country = StringToInt(points_from_country);
    return created_points;

}

UniqueId ADTPointToRead(Element points){
    return ((Points)points)->points_to_country;

}
UniqueId ADTPointFromRead(Element points){
    return ((Points)points)->points_from_country;
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


