#include "main.h"
/**
* _puts_recursion - Function that prints a string, followed by a new line.
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
