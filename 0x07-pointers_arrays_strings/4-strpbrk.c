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
	bool found = false;

	while (s[len] != '\0')
	{
		len++;
	}

	while (s[i] != '\0')
	{
		j = 0;

		for (; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				found = true;
				break;
			}
		}
		if (found)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
