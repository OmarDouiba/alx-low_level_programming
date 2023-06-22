#include "main.h"
/**
* more_numbers - function that prints 10 times the numbers, from 0 to 14,
*→      →       followed by a new line.
*
* Auth: DOUIBA Omar.
*/

void more_numbers(void)
{
	int num1 = 0, num2;

	while (num1 < 10)
	{
		num2 = 0;
		while (num2 <= 14)
		{
			_putchar((num2 % 10) + '0');
			if (num2 > 9)
			{
				_putchar((num2 % 10) + '0');
			}
			num2++;
		}
		_putchar('\n');
		num1++;
	}
}
