#include "main.h"
/**
*_strlen - calculate string lenth
*@str: string
*
*Return: string lenth
*/
int _strlen(char *str)
{
	int len = 0;

	for (; str[len] != '\0'; len++) ;
	return (len);
}

/**
 * *string_nconcat - concatenates n bytes of the string 2 to another string 1.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the concat string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j;
	unsigned int len_s1, len_s2;

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len_s2)
	{
		n = len_s2;
	}

	concat = malloc((len_s1 + n) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		concat[i] = s1[i];
	}

	j = 0;
	for (i = 0; i < n; i++)
	{
		concat[len_s1 + i] = s2[j];
		j++;
	}
	concat[len_s1 + n] = '\0';
	return (concat);
}
