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
	while (n > 0)
	{
		if (n != 0)
		{
		_putchar('_');
		_putchar('\\');
		_putchar('\n');
		n--;
	}
}
