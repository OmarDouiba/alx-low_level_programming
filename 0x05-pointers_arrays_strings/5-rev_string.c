#include "main.h"
/**
* rev_string - function that reverses a string.
* @s: string.
*
* Auth: DOUIBA Omar.
*/

void rev_string(char *s)
{
	int len = 0;
	char *p_str;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	p_str = s - 1;

	while (len > 0)
	{
		char temp = *p_str;
		*p_str = *s;
		*s = temp;
		p_str--;
		s++;
		len--;
	}
	*p_str = '\0';
}
