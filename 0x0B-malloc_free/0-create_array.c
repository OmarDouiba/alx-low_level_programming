#include "main.h"
/**
 *create_array - creates an array of chars, and initializes it
 *		with a specific char.
 *@size: size of the array.
 *@c: Character.
 *
 *Return: a pointer to the array, NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size);
	if (arr == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = c;
	}

	return (arr);
}
