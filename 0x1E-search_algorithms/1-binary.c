#include "search_algos.h"

/**
 *binary_search - function that searches for a value
 *in a sorted array of integers using the Binary search algorithm
 *@array: is a pointer to the first element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: The index if the value exists, otherwise -1
 */


int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, mid, i;

	if (!array)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
		}

		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return (-1);
}
