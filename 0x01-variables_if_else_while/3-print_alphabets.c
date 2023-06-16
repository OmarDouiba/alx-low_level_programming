#include <stdio.h>
/**
* main - Print the alphabet in lowercase and in uppercase
*
* Return: Always (0).
*/

int main(void)
{
	char alp_lower_case = 'a';
	char alp_upper_case = 'A';

	while (alp_lower_case <= 'z')
	{
		putchar(alp_lower_case);
		alp_lower_case++;
	}
	while (alp_upper_case <= 'Z')
	{
		putchar(alp_upper_case);
		alp_upper_case++;
	}
	putchar('\n');
	return (0);
}
