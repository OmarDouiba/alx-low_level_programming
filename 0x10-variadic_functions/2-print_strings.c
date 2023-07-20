#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - Function that prints numbers, followed by a new line.
 *@separator:  string to be printed between numbers.
 *@n: The number of integers passed to the function.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
