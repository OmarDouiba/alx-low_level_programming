#include <stdio.h>
/**
* main - Print the lowercase alphabet in reverse.
*
* Return: Always (0).
*/
int main(void)
{
	char rev_lowercase;

	for (rev_lowercase = 'z'; rev_lowercase >= 'a'; rev_lowercase--)
	{
		putchar(rev_lowercase);
	}
	putchar('\n');
	return (0);
}
