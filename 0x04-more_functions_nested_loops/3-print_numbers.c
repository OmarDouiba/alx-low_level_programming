#include "main.h"
/**
* print_numbers - function that prints the numbers, from 0 to 9, 
*		followed by a new line.
*
* Auth: DOUIBA Omar.
*/

void print_numbers(void)
{
	int digit_0_9 = 48;

	while (digit_0_9 <= 57)
	{
		_putchar(digit_0_9);
		digit_0_9++;
	}
	_putchar('\n');
}
