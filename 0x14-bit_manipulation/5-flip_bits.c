#include "main.h"
/**
 * flip_bits - gets the number of bits flipped form n to m
 * @n: initial lu int
 * @m: secondary lu int
 *
 * Return: number of bits need to flip to get from `n to `m`
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int mask = 1;
	unsigned long int res = n ^ m;

	while (res)
	{
		count += res & mask;
		res >>= 1;
	}

	return (count);
}
