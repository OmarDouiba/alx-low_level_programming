#include "main.h"
#include <stdbool.h>
/**
* _strpbrk -  function that searches a string for any of a set of bytes.
* @s: string.
* @accept: A pointer to the string containing the characters to be matched.
*
* Auth: DOUIBA Omar.
* Return: Pointer to the byte in s that matches one
*		of the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
