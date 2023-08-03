#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be printed in binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp = n;
	int shift = 0;
	int mask = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((tmp >>= 1) > 0)
	{
		shift++;
	}

	while (shift >= 0)
	{
		if ((n >> shift) &mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}

		shift--;
	}
}
