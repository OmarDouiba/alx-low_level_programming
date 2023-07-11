#include "main.h"
char *argstostr(int ac, char **av)
{
	int i, j;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return NULL;
	}

	str = malloc((ac + 1) * sizeof(char *));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[j] = av[i][j];
		}
		str[j] = '\n';
	}
	return (str);
}
