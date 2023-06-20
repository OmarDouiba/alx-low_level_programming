#include "main.h"
/**
* _islower - Function that checks if a character is lowercase.
* @c: The character we should check.
*
* Auth: DOUIBA Omar
*
* Return: 1 if character is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
