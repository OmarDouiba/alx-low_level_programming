#include "lists.h"
void first() __attribute__((constructor));
/**
 * first - Function that execute before main
 */
void first()
{
	printf("%s%s", "You're beat! and yet, you must allow,",
		"\nI bore my house upon my back!\n");
}
