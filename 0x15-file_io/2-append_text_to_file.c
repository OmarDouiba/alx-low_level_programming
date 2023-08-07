#include "main.h"
/**
* append_text_to_file - Functiona that append text o a file.
* @filename: Name of the file.
* @text_content: Text to be appended to the file
* Return: -1 if it fails, otherwise 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int text_len, open_f, close_f;
	ssize_t write_f;

	if (filename == NULL)
		return (-1);

	open_f = open(filename, O_APPEND | O_WRONLY);
	if (open_f == -1)
		return (-1);
	if (text_content == NULL)
		return (-1);

	text_len = _strlen(text_content);
	write_f = write(open_f, text_content, text_len);
	if (write_f == -1)
		return (-1);

	close_f = close(open_f);
	if (close_f)
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
