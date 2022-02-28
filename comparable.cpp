#include "comparable.h"

Comparable::~Comparable(){}

/**
 * @brief Compare one CInt to another
 * 
 * @param other Other CInt object
 * @return This int minus the other int
 */
int CInt::compareTo(Comparable* other) {
    CInt* cother = (CInt*)other;
    return x - cother->x;
}

/**
 * @brief Return the index of the smallest object in the
 * array of Comparable object references
 * 
 * @param arr Array of object references
 * @param N Length of the Array
 * @return int Index of the object that's the smallest, according to
 *             the Comparable order
 */
int getMinIndex(Comparable** arr, int N) {
    int minIndex = 0;
    // TODO: Fill this in
    return minIndex;
}