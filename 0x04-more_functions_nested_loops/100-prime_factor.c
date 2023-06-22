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
	int prime_factor = 2;
	long int num = 612852475143;

	while (num != 1)
	{
		if (num % prime_factor == 0)
		{
			num /= prime_factor;
		}
		else
		{
			prime_factor += 1;
		}
	}
	printf("%d\n", prime_factor);
	return (0);
}
