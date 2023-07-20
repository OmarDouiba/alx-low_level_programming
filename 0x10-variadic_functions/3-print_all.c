#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_all - Prints anything
 *@format: The conversion specifier.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned int i, n;
	char *str;

	n = 0;
	while (format[n])
		n++;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("(nil)");
						return;
					}
					printf("%s", str);
					break;
			}
			if (i != n - 1)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
