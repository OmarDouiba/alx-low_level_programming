#include "main.h"
/**
* *_strncpy - function that copies a string.
* @dest: destination string.
* @src: source string.
* @n: maximum number of characters to be copied from the source string.
*
* Auth: DOUIBA Omar.
* Return: destination string.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0, i, j;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
