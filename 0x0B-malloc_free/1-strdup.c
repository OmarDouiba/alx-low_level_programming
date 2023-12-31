#include "main.h"

/**
 *_strdup -  a pointer to a newly allocated space in memory, which
 *	    contains  a  copy of the string given as a parameter.
 *@str: string
 *
 *Return:  a pointer to a new string which is a duplicate of the string str
 *		NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc((len * sizeof(char) + 1));
	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*(dup_str + i) = *(str + i);
	}
	dup_str[len] = '\0';

	return (dup_str);
}
