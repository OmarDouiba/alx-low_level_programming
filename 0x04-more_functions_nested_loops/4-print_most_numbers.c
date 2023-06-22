#include "main.h"
/**
* print_most_numbers - function that prints the numbers, from 0 to 9,
*		followed by a new line
*
* Auth: DOUIBA Omar.
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num == 2 && num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
		num++;
	}
	_putchar('\n');
}
