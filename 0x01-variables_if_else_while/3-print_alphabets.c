#include <stdio.h>
/**
* main - Print the alphabet in lowercase and in uppercase
*
* Return: Always (0).
*/

int main(void)
{
	char alp_lowerUperCase;

	for (alp_lowerUperCase = 'a'; alp_lowerUperCase <= 'z'; alp_lowerUperCase++)
	{
		putchar(alp_lowerUperCase);
	}
	for (alp_lowerUperCase = 'A'; alp_lowerUperCase <= 'Z'; alp_lowerUperCase++)
	{
		putchar(alp_lowerUperCase);
	}
	putchar('\n');
	return (0);
}
