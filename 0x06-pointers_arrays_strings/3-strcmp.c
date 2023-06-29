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
	int len_s1 = 0, i = 0, res;
	int len_s2 = 0;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (len_s1 > len_s2 && s1[i] != s2[i])
		{
			res = 15;
		}
		else if (len_s2 > len_s1 && s1[i] != s2[i])
		{
			res = -15;
		}
		else
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
