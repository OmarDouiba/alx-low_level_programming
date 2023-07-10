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

	if (str == NULL)
	{
		return (NULL);
	}

	dup_str = malloc((len + 1));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(dup_str + i) = *(str + i);
	}

	return (dup_str);
}
