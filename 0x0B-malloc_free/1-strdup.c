#include "main.h"

/**
 * _strdup -  a pointer to a newly allocated space in memory, which
 *	    contains  a  copy of the string given as a parameter.
 * @str: string
 *
 * Return:  a pointer to a new string which is a duplicate of the string str
 *		NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *s;
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc((len + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(s + i) = *(str + i);
	}

	s[i] = '\0';
	return (s);
}
