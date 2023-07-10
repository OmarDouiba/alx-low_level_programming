/**
 *str_concat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *
 *Return: pointer should point to a newly allocated space in memory which
 *	 contains the contents of s1, followed by the contents of s2, and
 *	 null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	char *s3;
	s3 = malloc(len1 + len2 + 1);
	if (s1 == NULL || s2 == NULL)
	{
		return s3;
	}

	for (int i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}

	for (int i = 0; i < len2; i++)
	{
		s3[len1 + i] = s2[i];
	}

	s3[len1 + len2] = '\0';
	return (s3);
}
