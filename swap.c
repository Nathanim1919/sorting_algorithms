#include "sort.h"

/**
 * swap_ints - Swap two  given integers
 * @a: First integer
 * @b: Second integer
 */

void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}