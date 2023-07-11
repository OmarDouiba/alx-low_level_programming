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
 * argstostr - Function that concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: returns a pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, ind = 0;
	int av_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		av_len += _strlen(av[i]);
	}

	str = malloc((av_len + 1) * sizeof(char *));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[ind] = av[i][j];
			ind++;
		}
		str[ind] = '\n';
		ind++;
	}
	str[ind] = '\0';

	return (str);
}
