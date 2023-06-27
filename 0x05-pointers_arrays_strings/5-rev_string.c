#include "main.h"
/**
* rev_string - function that reverses a string.
* @s: string.
*
* Auth: DOUIBA Omar.
*/
void rev_string(char *s)
{
	char *p_start = s;
	char *p_end = s;

	while (*p_end != '\0')
	{
		p_end++;
	}

	p_end--;

	while (p_start < p_end)
	{
		char tmp = *p_start;
		*p_start = *p_end;
		*p_end = tmp;
		p_start++;
		p_end--;
	}
}
