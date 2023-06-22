#include "main.h"
/**
* isupper - function that checks for uppercase character
*
* @c: the Character we should Check.
*
* Auth: DOUIBA Omar.
*
* Return: 1 if c is uppercase, 0 otherwise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
}
