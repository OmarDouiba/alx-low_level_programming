#include "main.h"
/**
* binary_to_uint - Function that converts a binary number to integer.
* @b: string that contain a binary number.
* Return: The converted number, Otherwise 0 if b is NULL
*	or there's any chars that isn't 0 or 1.
*/
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int res = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		res = (res << 1) + (b[i] - '0');/* '0' = 48 in ASCII */
		i++;
	}
	return (res);
}
