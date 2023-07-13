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
	unsigned int i, k = 0;
	unsigned int len_s1, len_s2;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

    if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc((len_s1 + len_s2) + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len_s1; i++)
	{
	    concat[i] = s1[i];
	    k++;
	}
	
	for (i = 0; i < len_s2; i++)
	{
	    if (i < n)
	    {
	        concat[len_s1 + i] = s2[i];
	    }
	    else
	    {
	        break;
	    }
	    k++;
	}
	concat[k] = '\0';
	
	return (concat);
}
