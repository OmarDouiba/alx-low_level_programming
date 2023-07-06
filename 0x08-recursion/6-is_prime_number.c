#include "main.h"
/**
* is_prime_number - Function that returns 1 if the input integer
*	is a prime number, otherwise return 0.
* @n: Number.
*
* Auth: DOUIBA Omar.
* Return: 1 if the input integer is a prime number,
*		otherwise return 0.
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, 2));
	}
}
/**
* prime_number - Function that returns 1 if the input integer
*→      is a prime number, otherwise return 0.
* @m: Number.
* @i: strat from 2.
*  Return: 1 if the input integer is a prime number,
*→      →       otherwise return 0.
*/

int prime_number(int m, int i)
{
	if (m == i)
	{
		return (1);
	}
	else if ((m % i) == 0)
	{
		return (0);
	}
	else
	{
		return (prime_number(m, ++i));
	}
}
