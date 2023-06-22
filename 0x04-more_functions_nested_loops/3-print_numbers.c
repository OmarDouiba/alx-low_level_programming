#include "main.h"
/**
* print_numbers - function that prints the numbers, from 0 to 9, 
*		followed by a new line.
*
* Auth: DOUIBA Omar.
*/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
