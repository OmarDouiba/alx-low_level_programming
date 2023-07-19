#include "function_pointers.h"

/**
* print_name - Function that print a string.
* @name: string parameter.
* @f: Is function pointer.
*
* Auth: DOUIBA Omar.
*/
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
