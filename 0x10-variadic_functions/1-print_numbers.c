#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - Function that prints numbers, followed by a new line.
* @separator:  string to be printed between numbers.
* @n: The number of integers passed to the function.
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
