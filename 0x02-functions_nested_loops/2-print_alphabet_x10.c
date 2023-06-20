#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase 10 times,
 *		followed by a new line.
 *
 * Auth : DOUIBA Omar
 */
void print_alphabet_x10(void)
{
	char alp;
	int alp10;

	for (alp10 = 0; alp10 <= 9; alp10++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}

