#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *main - program that perfroms simple operations
 *@ac: number of arguments
 *@av: array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int ac, char *av[])
{
	(void)ac;

	int num1, num2, result;

	int(*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operation = get_op_func(av[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	if ((*av[2] == '/' || *av[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
