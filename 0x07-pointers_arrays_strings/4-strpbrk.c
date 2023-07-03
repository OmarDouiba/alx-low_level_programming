#include "main.h"
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
	int i = 0, j, ind;
	int len = 0;

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
				ind = i;
				break;
			}
		}
		if (s[i] == accept[i])
		{
			break;
		}
		i++;
	}
	return (s + ind - 1);
}
