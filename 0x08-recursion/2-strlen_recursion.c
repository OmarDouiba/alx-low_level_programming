#include "main.h"
/**
* _strlen_recursion - Function that returns the length of a string.
* @s: String.
*
* Auth: DOUIBA Omar.
*
* Return: Lenght of string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
