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
	char *p_str = str;
	while (*p_str != '\0')
	{
		_putchar(*p_str);
		p_str += 2;
	}
	_putchar('\n');
}

