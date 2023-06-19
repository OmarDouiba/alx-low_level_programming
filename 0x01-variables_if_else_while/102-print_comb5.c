#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always (0).
 */
int main(void)
{
	int digit1 = 0;
	int digit2;

	while (digit1 <= 98)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 99)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 != 98)
			{
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
