#include <stdio.h>
/**
* main - Print the alphabet in lowercase and escaping q and e
*
* Return: Always (0).
*/
int main(void)
{
	char alp_lowercase;

	for (alp_lowercase = 'a'; alp_lowercase <= 'z'; alp_lowercase++)
	{
		if (alp_lowercase == 'q' || alp_lowercase == 'e')
		{
			continue;
		}
		putchar(alp_lowercase);
	}
	putchar('\n');
	return (0);
}
