#ifndef MATAM1_POINTS_H
#define MATAM1_POINTS_H

#include "namelib.h"
#include "eurovision.h"
#include "list.h"


typedef struct points_t *Points;


/*
 * creats new Points object for initial use in the program
 */
Points CreatePointsStruct(Element points_from_country, Element points_to_country);
/*
 * copy function for the points object useful for ADT
 */
ListElement CopyPoints(Element points_struct);
/*
 * free function for points object
 */
void FreePoints(Element points_struct);

/*
* all the functions that start with ADT
 * are simple return\place function
 * the location of the action is in the function name
*/
UniqueId ADTPointToRead(Element points);

UniqueId ADTPointFromRead(Element points);


#endif //MATAM1_POINTS_H
