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
	int i, def;

	if (min > max)
	{
		return (NULL);
	}

	def = max - min;
	arr = (int *) malloc((def + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= def; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
