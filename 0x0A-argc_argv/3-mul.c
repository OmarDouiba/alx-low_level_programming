#include "main.h"
/**
* main - Entry point of the program.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Auth: DOUIBA Omar.
*
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int mut;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mut = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", mut);
	}
	return (0);
}
