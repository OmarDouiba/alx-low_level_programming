#include "main.h"
/**
*  create_file - Funtion that create a file.
* @filename: Name of the file to be created.
* @text_content: the text that copied to the file.
*
* Return: -1 if it fails, otherwise 1.
*/
int create_file(const char *filename, char *text_content)
{
	int create_f, text_len, close_f;
	ssize_t write_f;

	if (text_content == NULL)
		text_content = "";
	if (filename == NULL)
		return (-1);

	create_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (create_f == -1)
		return (-1);

	text_len = _strlen(text_content);

	write_f = write(create_f, text_content, text_len);
	if (write_f == -1)
		return (-1);

	close_f = close(create_f);
	if (close_f == -1)
		return (-1);
	return (1);
}

/**
* _strlen - function that returns the length of a string.
* @s: string.
*
* Auth: DOUIBA Omar.
*
* Return: the length of string.
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
