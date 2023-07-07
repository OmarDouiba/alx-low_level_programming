/**
 * _atoi - Convert a string representation of an integer to an integer.
 *
 * @s: String possibly containing an integer.
 *
 * Return: The first integer in the string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result != 0)
		{
			break;
		}
		s++;
	}

	return (result * sign);
}
