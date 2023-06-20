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
	int n1 = 0, n2;

	while (n1 <= 23)
	{
		n2 = 0;

		while (n2 <= 59)
		{
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar(':');
			_putchar((n2 / 10) + '0');
			_putchar((n2 % 10) + '0');
			_putchar('\n');
			n2++;
		}
		n1++;
	}
}
