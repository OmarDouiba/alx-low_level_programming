#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *sep, va_list args);
void print_int(char *sep, va_list args);
void print_float(char *sep, va_list args);
void print_string(char *sep, va_list args);

/**
* struct format_types - Struct format_types
* @op: The conversion specifier
* @f: The function pointer
*/
typedef struct format_types
{
	char *op;
	void (*f)(char *sep, va_list args);
} fmt_t;
#endif
