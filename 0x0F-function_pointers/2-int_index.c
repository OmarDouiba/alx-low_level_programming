#include "function_pointers.h"

/**
* int_index - Function that searches for an integer. then print the index.
* @array: The array that we checked.
* @size: The size of the array.
* @cmp: Callbacks function that compare each elements in a given array.
*
* Return: (-1) if the size less then or equal to 0, or the compare is 0.
*	index if the compartion is true.
*/

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]) == 1)
		{
			return (i);
		}

		i++;
	}

	return (-1);
}
