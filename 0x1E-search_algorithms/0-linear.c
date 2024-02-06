#include "search_algos.h"

/**
 *linear_search - function that searches for a value
 *in a sorted array of integers
 *using the Binary search algorithm
 *@array: s a pointer to the first
 *element of the array to search in
 *@size: is the number of elements in array
 *@value: is the value to search for
 *Return: the index, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}