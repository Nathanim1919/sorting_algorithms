#include <stdio.h>
#include <stdlib.h>

int *bubblesort(int *array, size_t size);

int *bubblesort(int *array, size_t size)
{
    for (int i = 0; i < size; i++)
    {
        for (int k = i + 1; k < size; k++)
        {
            if (array[i] > array[k])
            {
                int temp = array[i];
                array[i] = array[k];
                array[k] = temp;
            }
        }

        for (int j = 0; j < size; j++)
        {
            printf("%d ", array[j]);
        }
        printf("\n");
    }

    return array;
}

int main()
{
    int newArray[] = {3, 5, 1, 9, 4};
    int *sortedArray = bubblesort(newArray, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", sortedArray[i]);
    }
    printf("\n");

    return 0;
}
