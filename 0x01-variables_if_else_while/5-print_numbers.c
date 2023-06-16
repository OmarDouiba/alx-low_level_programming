#include <stdio.h>
/**
* main - Print all single digit numbers of base 10 starting from 0
* using Printf.
*
* Return: Always (0).
*/
int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 9; base10++)
	{
		printf("%d", base10);
	}
	printf("\n");
	return (0);
}
