#include "main.h"
/**
* _strspn - Function that gets the length of a prefix substring.
* @s: A pointer to the string to be analyzed.
* @accept: A pointer to the string containing the characters to be matched.
*
* Auth: DOUIBA Omar.
* Return: Number of bytes in the initial segment of s which consist only
*						of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, n = 0;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (*s)
	{
		j = 0;

		for (; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (j == len)
		{
			break;
		}
		i++;
	}
	return (n);
}
