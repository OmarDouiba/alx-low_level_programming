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
	int add = 0, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] >= 'a' && argv[i][0] <= 'z')
			{
				printf("Error\n");
				exit(1);
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
