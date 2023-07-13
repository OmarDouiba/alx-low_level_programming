#include "main.h"
/**
* array_range - unction that creates an array of integers.
* @min: Minimum number.
* @max: Maximum number.
*
* Auth: DOUIBA Omar.
* Return: Array of number from min to max.
*/
int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (; min <= max; min++)
	{
		arr[min] = min;
	}

	return (arr);
}
