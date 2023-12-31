#include "main.h"
/**
* _calloc - Allocates memory for an array and initializes it with zeros.
* @nmemb: Number of elements to allocate memory for an array.
* @size: Size (in bytes) of each element.
*
* Auth: DOUIBA Omar.
* Return: Pointer to the allocated memory block.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *cal;
	unsigned char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	cal = malloc(nmemb * size);
	if (cal == NULL)
	{
		return (NULL);
	}

	block = cal;
	for (i = 0; i < nmemb * size; i++)
	{
		block[i] = 0;
	}

	return (block);
}
