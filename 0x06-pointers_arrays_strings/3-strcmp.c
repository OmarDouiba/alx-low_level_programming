#include "main.h"
/**
* _strcmp - function that compares two strings.
* @s1: first string to be compared.
* @s2: second string to be compared.
*
* Auth: DOUIBA Omar.
* Return: 0 if s1 is equal to s2.
*	negative integer, if s1 is lexicographically less than s2.
*	positive integer, s1 is lexicographically greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}

	if (s1[i] == '\0' && s2[i] != '\0')
	{
		return (-1);
	}
	else if (s1[i] != '\0' && s2[i] == '\n')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
