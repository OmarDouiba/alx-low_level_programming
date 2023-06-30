#include "main.h"
/**
* *rot13 - function that encodes a string using rot13.
* @s: string.
*
* Auth: DOUIBA Omar.
* Return: encoder string.
*/

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'A' && s[i] <= 'M') ||
			(s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') ||
				(s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] = s[i] - 13;
		}
		i++;
	}
	return (s);
}
