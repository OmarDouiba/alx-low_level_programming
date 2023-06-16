#include <stdio.h>
/**
* main -  print all the numbers of base 16 in lowercase.
*
* Return: Always (0).
*/
int main(void)
{
	int num_base16 = 0;

	while (num_base16 < 16)
	{
		if (num_base16 < 10)
		{
			putchar(num_base16 + '0');
		}
		else
		{
			putchar((num_base16 + 39) + '0');
		}
		num_base16++;
	}
	putchar('\n');
	return (0);
}
