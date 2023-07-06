#include "main.h"
/**
* _pow_recursion - Function that returns the value of x raised
*		to the power of y.
*
* @x: This is the base number.
* @y: This is the exponent.
*
* Auth: DOUIBA Omar.
*
* Return: -1 if y lower then 0.
*	1 if x equal to 1 or y equal to 0,
*	x if y equal to 1,
*	otherwise power.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 1 || y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
