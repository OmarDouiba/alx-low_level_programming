#include <stdio.h>
/**
* main - Print the alphabet in lowercase and escaping q and e
*
* Return: Always (0).
*/
int main(void)
{
	char alp_lowercase = 'a';

	while (alp_lowercase <= 'z')
	{
		if (alp_lowercase == 'q' || alp_lowercase == 'e')
		{
			continue;
		}
		putchar(alp_lowercase);
		alp_lowercase++;
	}
	putchar('\n');
	return (0);
}
