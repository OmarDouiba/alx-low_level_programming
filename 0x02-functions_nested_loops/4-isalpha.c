#include "main.h"
/**
* _isalpha - Function that checks if a character is alphabetic.
* @c: Is the character we should check.
*
* Auth: DOUIBA Omar
*
* Return: 1 if character is letter, 0 otherwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
