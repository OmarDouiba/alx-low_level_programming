#include "main.h"
#include <stdio.h>
/**
* main - prints the numbers from 1 to 100, followed by a new line.
*
* Auth: DOUIBA Omar.
*
* Return: Always (0).
*/

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n == 100)
		{
			printf("\n");
			break;
		}
		printf(" ");
		n++;
	}
	return (0);
}
