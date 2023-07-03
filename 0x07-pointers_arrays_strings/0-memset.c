#include "main.h"
/**
* _memset - function that fills memory with a constant byte.
* @s: This is a pointer to the starting address of
*	the memory block that needs to be filled.
*
* @b: This is the value to be set. It is of type char.
*
* @n: This is the number of bytes to be set to the value b.
*
* Auth: DOUIBA Omar.
* Return: Pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for(; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
