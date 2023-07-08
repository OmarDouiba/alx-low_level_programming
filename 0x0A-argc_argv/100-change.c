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
	int coins[] = {25, 10, 5, 2, 1}, coins_num = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else if (argv[argc - 1][0] == '-')
	{
		printf("0\n");
	}
	else
	{
		int i, coins_size = sizeof(coins) / sizeof(coins[0]),
		input_coin = atoi(argv[argc - 1]);

		for (i = 0; i < coins_size; i++)
		{
			coins_num += input_coin / coins[i];
			input_coin %= coins[i];
		}
		printf("%d\n", coins_num);
	}
	return (0);
}
