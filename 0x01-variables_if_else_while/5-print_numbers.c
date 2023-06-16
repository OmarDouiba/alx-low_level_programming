#include <stdio.h>
/**
* main - Print all single digit numbers of base 10 starting from 0
* using Printf.
*
* Return: Always (0).
*/
int main(void)
{
	int base10 = 0;

	while (base10 <= 9)
	{
		printf("%d", base10);
		base10++;
	}
	printf("\n");
	return (0);
}
