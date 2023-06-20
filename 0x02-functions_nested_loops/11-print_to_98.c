#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Prints all natural numbers from input to 98,
*
* @n: The number to begin counting at.
*
* Auth: DOUIBA Omar
*
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
		printf("%d", n--);
			if (n >= 98)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n++);
			if (n != 99)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
