#include "main.h"
/**
* print_triangle - function that prints a triangle, followed by a new line.
*
* size: size of the triangle.
*
* Auth: DOUIBA Omar.
*/

void print_triangle(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (i < size)
	{
		j = 0;

		while (j < size - i - 1)
		{
			_putchar('.');
			j++;
		}
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
