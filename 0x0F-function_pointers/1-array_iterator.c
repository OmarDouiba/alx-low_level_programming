#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator - Function that executes a function given as a parameter
*		on each element of an array.
* @array: the array that we should print.
* @size: the size of the array.
* @action: callbacks function.
*/

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
