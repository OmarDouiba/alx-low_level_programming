#include "main.h"
/**
* print_number - function that prints an integer.
*
* @n: number we should print.
*
* Auth: DOUIBA Omar.
*/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) != 0)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
