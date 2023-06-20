#include "main.h"
/**
* jack_bauer - .Prints every minute of the day.
* @n1: hour
* @n2: minute
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
