#include "main.h"

/**
* _sqrt_recursion - Function that returns the natural square root of a number.
* @n: Number.
*
* Auth: DOUIBA Omar.
* Return: -1 if n negative. Otherwise sqrt.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_(n, 0));
	}
}

/**
* _sqrt_ - Function that returns the natural square root of a number.
* @i: Number.
* @m: Number.
* Return: -1 if i * i upper then m. Otherwise sqrt.
*/
int _sqrt_(int m, int i)
{
	if (i * i > m)
	{
		return (-1);
	}
	else if (i * i == m)
	{
		return (i);
	}
	else
	{
		return (_sqrt_(m, ++i));
