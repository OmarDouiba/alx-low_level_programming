#include "main.h"
/**
* rev_string - function that reverses a string.
* @s: string.
*
* Auth: DOUIBA Omar.
*/
void rev_string(char *s)
{
	int len = 0, m, i;
	char tmp;

	while (s[len] != '\0')
	{
		len++;
	}

	m = len / 2;

	for (i = 0; i < m; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
