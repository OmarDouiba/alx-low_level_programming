#include "main.h"
/**
* _strcat - function that concatenates two strings.
* @dest: destination string.
* @src: source string.
*
* Auth: DOUIBA Omar.
*
* Return: destination string.
*/

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, i = 0;
	int len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = 0; i < len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
