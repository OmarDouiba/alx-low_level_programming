#include "main.h"
/**
* *_strncat - function that concatenates two strings.
* @dest: destination string.
* @src: source string.
* @n: maximum number of characters to be appended from the source string.
*
* Auth: DOUIBA Omar.
* Reurn : destination string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, i = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
