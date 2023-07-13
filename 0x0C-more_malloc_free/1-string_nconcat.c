#include "main.h"
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
	int len_s1, len_s2, total_len;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2;

	if (n == NULL)
	{
		s2 = "";
	}

	concat = malloc(total_len + 1);
	if (concat == NULL)
	{
		return (NULL);
	}

	

