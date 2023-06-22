#include "main.h"
/**
* main - function that draws a diagonal line on the terminal.
*
* @n: n is the number of times the character \ should be printed.
*
* Auth: DOUIBA Omar.
*/

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (i < n)
	{
		j = 0;

		while (j  < i)
		{
			_putchar('_');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
