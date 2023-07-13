#include "main.h"
/**
* malloc_checked - Function that allocates memory.
* @b: The memory size.
*
* Auth: DOUIBA Omar.
* Return: Pointer to the allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	size_t *ml_check;

	ml_check = malloc(b);
	if (ml_check == NULL)
	{
		exit(98);
	}
	return (ml_check);
}
