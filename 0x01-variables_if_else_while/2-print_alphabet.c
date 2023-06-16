#include <stdio.h>
/**
* main - Print the alphabet in lowercase
*
* Return: Always (0).
*/

int main(void)
{
	char alp_lowercase;

	for (alp_lowercase = 'a'; alp_lowercase <= 'z'; alp_lowercase++)
	{
		putchar(alp_lowercase);
	}
	putchar('\n');
	return (0);
}
