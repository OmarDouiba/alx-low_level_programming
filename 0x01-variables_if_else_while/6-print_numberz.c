#include <stdio.h>
/**
* main - Print all single digit numbers of base 10 starting from 0
* using Putchar.
*
* Return: Always (0).
*/
int main(void)
{
	int base10 = 0;

	while (base10 <= 9)
	{
		putchar(base10 + '0');
		base10++;
	}
	putchar('\n');
	return (0);
}
