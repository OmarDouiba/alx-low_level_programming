#include "main.h"
/**
* *cap_string - function that capitalizes all words of a string.
* @str: string.
*
* Auth: DOUIBA Omar.
*
* Return: capitalizes words
*/

char *cap_string(char *str)
{

	int cap_index = 1, i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == '\t' || str[i] == ' ' || str[i] == ',' || str[i] == ';' || str[i] == '.' ||
	str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
	str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == '\n')
	{
		cap_index = 1;
	}
	else if (cap_index)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32;
		}
		cap_index = 0;
	}
	}
	return (str);
}
