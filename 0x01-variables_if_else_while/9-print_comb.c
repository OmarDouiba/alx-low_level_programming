#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers.
*
* Return: Always (0).
*/
int main(void)
{
	int s_digit_c = 0;

	while (s_digit_c < 10)
	{
		putchar(s_digit_c + '0');
		if (s_digit_c == 9)
		{
			break;
		}
		putchar(',');	
		s_digit_c++;
	}
	putchar('\n');
	return (0);
}
