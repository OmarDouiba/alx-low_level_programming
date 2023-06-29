#include "main.h"
/**
* reverse_array - function that reverses the content of an array of integers.
* @a: an array of integers
* @n: number of elements of the array
*
* Auth: DOUIBA Omar.
*/

void reverse_array(int *a, int n)
{
	int tmp, i, m;

	if ((n % 2) == 0)
	{
		m = n / 2;
	}
	else
	{
		m = n / 2 + 1;
	}

	for (i = 0; i < m; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
