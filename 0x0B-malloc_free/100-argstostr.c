#include "main.h"

char *argstostr(int ac, char **av)
{
	int i, j;
	char **str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str = malloc(atoi(ac) * sizeof(char *));
	for (i = 0; i < atoi(ac); i++)
	{
		str[i] = malloc(strlen(av[i]) * sizeof(char));
	}
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < atoi(ac); i++)
	{
		for (j = 0; j < strlen(av[i][j]); j++)
		{
			if (av[i][j] == ' ')
			{
				str[i][j] = '\n';
			}
			else
			{
				str[i][j] = av[i][j];
			}
		}
	}

	return (str);
}
