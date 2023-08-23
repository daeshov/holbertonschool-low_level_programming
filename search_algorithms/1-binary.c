#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int low = 0;
    int high = size - 1;
    int mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        printf("Searching in array: ");
        for (size_t i = (size_t)low; i <= (size_t)high; i++)
        {
            printf("%d", array[i]);
            if (i != (size_t)high)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; /* Value not found */
}
