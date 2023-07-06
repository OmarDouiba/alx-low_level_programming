#include "main.h"
/**
* is_palindrome - Function that returns 1 if a string
*			is a palindrome and 0 if not.
* @s: string.
*
* Auth: DOUIBA Omar.
* Return: 1 if a string is a palindrome, Otherwise 0.
*/

int is_palindrome(char *s)
{
	int r = _strlen_recursion(s);

	return (palindrome(s, 0, r - 1));
}
/**
* palindrome - Function that returns 1 if a string.
* @s: string.
* @start: start of the string.
* @end: end of the string.
*
* Return: 1 if palindrome, Otherwise 0.
*/
int palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (palindrome(s, start + 1, end - 1));
	}
}
