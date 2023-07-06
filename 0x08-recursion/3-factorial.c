#include "main.h"
/**
* factorial - Function that returns the factorial of a given number.
* @n: Number.
*
* Auth: DOUIBA Omar.
*
* Return: -1 if n lower than 0, otherwise factorial.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
