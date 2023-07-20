#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - Function that returns the sum of all its parameters.
* @n: the numbers of parameters
* Return: sum of numbers given after parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
