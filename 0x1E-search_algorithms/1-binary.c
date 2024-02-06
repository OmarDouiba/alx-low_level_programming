#include "search_algos.h"

/**
 * binary_search -
 * @array:
 * @size:
 * @value:
 * Return: The index if the value exists, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
    size_t l = 0, r = size, i;
    int mid;

    if (array == NULL)
        return -1;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        printf("Searching in array: ");
        for (i = l; i < r; i++)
        {
            printf("%ld", i);
            if (i != r - 1)
                printf(", ");
            else
            {
                printf("\n");
            }
        }

        if (array[mid] == value)
        {
            return (mid);
        }
        if (value < array[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return (-1);
}