#include <stdio.h>
/**
* main - Print the lowercase alphabet in reverse.
*
* Return: Always (0).
*/
int main(void)
{
	char rev_lowercase = 'z';

	while (rev_lowercase >= 'a')
	{
		putchar(rev_lowercase);
		rev_lowercase--;
	}
	putchar('\n');
	return (0);
}
