#include <stdio.h>
/**
* main - Prints the first 52 fibonacci numbers
*
* Auth: DOUIBA Omar
*
* Return: Nothing!
*/

int main(void)
{
	long int n0 = 1, n1 = 0, n2 = 1, n3;

	while (n0 <= 50)
	{
		n3 = n2;
		n2 = n2 + n1;
		n1 = n3;
		printf("%ld", n2);
		if (n0 != 50)
		{
			printf(", ");
		}
		n0++;
	}
	printf("\n");
	return (0);
}
