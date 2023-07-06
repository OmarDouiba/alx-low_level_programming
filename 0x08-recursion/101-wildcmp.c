#include "main.h"
/**
* wildcmp - Function that compares two strings and returns 1 if
*	the strings can be considered identical, otherwise return 0.
* @s1: The first string.
* @s2: The second string.
*
* Auth: DOUIBA Omar.
* Return: If the strings can be considered identical - 1.
*         Otherwise - 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2 || *s2 == '*')
	{
		if (wildcmp(s1 + 1, s2 + 1))
		{
			return (1);
		}
	}

	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
		{
			return (1);
		}
	}

	return (0);
}
