#include "sort.h"
/*
 *bubble_sort - sort a number in ascending order
 * @array: array
 * @size: size of array
 * Returns: nothing
 */
void bubble_sort(int *array, size_t size)
{
    size_t len;

    len = size;

    if (array == NULL || size < 2)
    {
        return;
    }

    for (size_t i = 0; i < len; i++)
    {
        for (size_t k = i + 1; k < len; k++)
        {
            if (array[i] < array[k])
            {
                swap(&array[k], &array[i]);
                print_array(array, size);
            }
        }
        len--;
    }
}
