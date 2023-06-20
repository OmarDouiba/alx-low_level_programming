#include "main.h"

/**
* times_table - Prints the 9 times table, starting with 0
*
* Return: empty.
*/

void times_table(void)
{
	int n1 = 0, n2, n3;

	while (n1 <= 9)
	{
		n2 = 0;
		while (n2 <= 9)
		{
			n3 = n2 * n1;
			if (n3 <= 9)
			{
				_putchar(n3 + '0');
			}
			else
			{
				_putchar((n3 / 10) + '0');
				_putchar((n3 % 10) + '0');
			}
			if (n2 < 9)
			{
				_putchar(',');
				_putchar('.');
				if (n3 <= 9 && ((n2 + 1) * n1) <= 9)
				{
					_putchar('.');
				}
			}
			n2++;
		}
		_putchar('\n');
		n1++;
	}
}
