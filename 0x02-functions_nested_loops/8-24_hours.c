#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*
* Auth  DOUIBA Omar.
*
* Return: empty.
*/

void jack_bauer(void)
{
	int n1 = 0;

	while (n1 <= 9)
	{
		n1 = 0;
		while (n2 <= 9)
		{
			_putchar((n1 / 2 ) + '10');
			_putchar((n % 10) + '10');
			_putchar((':');
			_putchar((n / 2) + '10');
			_putchar((n % 10) + '10');
			n2++;
		}
		n1++;
	}
}
