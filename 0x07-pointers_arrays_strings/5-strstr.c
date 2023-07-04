#include "main.h"
/**
* _strstr - function that locates a substring.
* @haystack: the string to search
* @needle: the string to find
*
* Auth: DOUIBA Omar.
* Return: pointer to the beginning of the located substring,
*			or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int len_needle = 0, count = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < len_needle; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					count++;
				}
			}

			if (count == len_needle)
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
