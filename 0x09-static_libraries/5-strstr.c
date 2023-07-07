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
	int i, j = 0;
	int len = 0;

	while (needle[len] != '\0')
	{
		len++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			int found = 1;

			for (j = 0; j < len; j++)
			{
				if (haystack[i + j] != needle[j])
				{
					found = 0;
					break;
				}
			}

			if (found)
			{
				return (haystack + i);
			}
		}
	}

	return ('\0');
}
