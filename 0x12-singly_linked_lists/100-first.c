#include "lists.h"
void first(void) __attribute__((constructor));
/**
 * first - Function that execute before main
 */
void first(void)
{
	printf("%s%s", "You're beat! and yet, you must allow,",
		"\nI bore my house upon my back!\n");
}
