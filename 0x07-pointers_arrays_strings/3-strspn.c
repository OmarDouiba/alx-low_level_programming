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
	unsigned int n = 0;
	int i = 0, j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (*s)
	{
		int found = 0;

		j = 0;

		for (; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		i++;
	}
	return (n);
}
