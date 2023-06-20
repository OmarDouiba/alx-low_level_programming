#include "main.h"
/**
* print_last_digit - Prints the last digit of a number.
* @n: The number requiring processing.
*
* Auth: DOUIBA Omar
*
* Return: Value of the last digit.
*/

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar((n % 10) * -1 + '0');
		return ((n % 10) * -1);
	}
}
