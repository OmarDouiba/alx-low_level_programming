#include <stdio.h>
/**
* main - finds and prints the largest prime factor of the number 612852475143,
*		followed by a new line.
*
* Auth: DOUIBA Omar.
*
* Return: Always (0).
*/

int main(void)
{
	int div = 2;
	long int prime_factor = 612852475143;

	while (prime_factor != 1)
	{
		if (prime_factor % div == 0)
		{
			prime_factor /= div;
		}
		else
		{
			div += 1;
		}
	}
	printf("%d\n", div);
	return (0);
}
