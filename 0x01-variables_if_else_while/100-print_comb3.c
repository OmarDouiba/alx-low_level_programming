#include <stdio.h>
/**
* main - print all possible different combinations of two digits.
*
* Return: Always (0).
*/
int main(void)
{
	int two_digits1 = 0;
	int two_digits2 = 1;

	while (two_digits1 <= 8)
	{
		while (two_digits2 <= 9)
		{
			putchar(two_digits1 + '0');
			putchar(two_digits2 + '0');
			if (two_digits1 != 8 || two_digits2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
			two_digits2++;
		}
		two_digits2 = 0;
		two_digits1++;
	}
	putchar('\n');
	return (0);
}
