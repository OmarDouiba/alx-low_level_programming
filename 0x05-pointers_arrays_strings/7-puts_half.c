#include "main.h"
/**
* puts_half - function that prints half of a string, followed by a new line.
* @s: string.
*
* Auth: DOUIBA Omar.
*/

void puts_half(char *str)
{
	int len = 0, m;
	char *p_str = str;

	while (*p_str != '\0')
	{
		p_str++;
		len++;
	}

	m = len / 2;
	p_str = str + m;

	while (*p_str != '\0')
	{
		_putchar(*p_str);
		p_str++;
	}
	_putchar('\n');
}
