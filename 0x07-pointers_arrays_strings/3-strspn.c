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
	int i = 0, j, n = 0;
	int len_accept;

	while(accept[len_accept] != '\0')
	{
		len_accept++;
	}

	while (s[i] != '\0')
	{

		for (j = 0; j < len_accept; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (n);
			}
		}

		i++;
	}
	return (n);
}
