#include "main.h"
/**
* print_line - function that draws a straight line in the terminal.
*
* @n: n is the number of times the character _ should be printed.
*
* Auth: DOUIBA Omar.
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
