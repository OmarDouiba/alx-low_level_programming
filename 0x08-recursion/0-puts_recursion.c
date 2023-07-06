#include "main.h"
/**
* _print_rev_recursion - Function that prints a string in reverse.
* @s: String.
*
* Auth: DOUIBA Omar.
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}