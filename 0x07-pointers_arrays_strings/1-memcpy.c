#include "main.h"
/**
* _memcpy - Function that copies memory area.
* @dest: This is a pointer to the destination memory where
*		the data will be copied to.
* @src: This is a pointer to the source memory
*		from where the data will be copied.
* @n: This is the number of bytes to be copied from the source memory
*		to the destination memory.
*
* Auth: DOUIBA Omar.
* Return: Pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
