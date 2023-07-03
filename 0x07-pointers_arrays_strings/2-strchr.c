#include "main.h"
/**
* _strchr - Function that locates a character in a string.
* @s: This is a pointer to a null-terminated
*			string where the search will be performed.
* @c:  This is the character to be located within the string.
*
* Auth: DOUIBA Omar.
* Return: Pointer to the first occurrence of the character c in the string s,
*					or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
