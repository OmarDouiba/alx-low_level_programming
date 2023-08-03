#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @n: integer to get bit value from
 * @index: index starting from 0, of the bit we want to get
 * Return: bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = 1;
	unsigned long int sheft = n >> index;
	unsigned int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
	{
		return (-1);
	}

	return (sheft & mask);
}
