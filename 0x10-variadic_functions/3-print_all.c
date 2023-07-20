#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_all - Prints anything
 *@format: The conversion specifier.
 *
 *Return: Nothing
 */

void print_all(const char *const format, ...)
{
	int i = 0;
	int j;
	char *sep = "";

	va_list args;

	fmt_t fmt[] = {
		{ "c", print_char
		},
		{ "i", print_int
		},
		{ "f", print_float
		},
		{ "s", print_string
		},
		{
			NULL, NULL
		}
	};

	va_start(args, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (fmt[j].id[0] == format[i])
			{
				fmt[j].f(sep, args);
				sep = ", ";
			}

			j++;
		}

		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 *print_a_char - Print a character.
 *@sep: The separator of the character
 *@args: A list of variadic arguments
 *
 */
void print_char(char *sep, va_list args)
{
	printf("%s%c", sep, (char) va_arg(args, int));
}

/**
 *print_a_char - Print a integer.
 *@sep: The separator of the character
 *@args: A list of variadic arguments
 *
 */
void print_int(char *sep, va_list args)
{
	printf("%s%i", sep, va_arg(args, int));
}

/**
 *print_a_char - Print a float.
 *@sep: The separator of the character
 *@args: A list of variadic arguments
 *
 */
void print_float(char *sep, va_list args)
{
	printf("%s%f", sep, va_arg(args, double));
}

/**
 *print_a_char - Print a string.
 *@sep: The separator of the character
 *@args: A list of variadic arguments
 *
 */
void print_string(char *sep, va_list args)
{
	if (va_arg(args, char *) == NULL)
	{
		printf("%s%s", sep, "(nil)");
		return;
	}

	printf("%s%s", sep, va_arg(args, char *));
}
