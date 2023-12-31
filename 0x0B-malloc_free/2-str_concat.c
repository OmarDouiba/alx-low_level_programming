#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *str_concat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *
 *Return: pointer should point to a newly allocated space in memory which
 *	 contains the contents of s1, followed by the contents of s2, and
 *	 null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	s3 = malloc(len1 + len2 + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		s3[len1 + i] = s2[i];
	}

	s3[len1 + len2] = '\0';
	return (s3);
}
