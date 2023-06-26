#include "main.h"
/**
*puts2 - function that prints every other character of a string,
*	starting with the first character, followed by a new line.
* @str: string.
*
* Auth: DOUIBA Omar.
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

