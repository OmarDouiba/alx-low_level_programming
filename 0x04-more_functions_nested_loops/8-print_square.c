#include "main.h"
/**
*  print_square - function that prints a square, followed by a new line.
*
* @size: the size of the square
*
* Auth: DOUIBA Omar.
*/

void print_square(int size)
{
	int i = 0, j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
