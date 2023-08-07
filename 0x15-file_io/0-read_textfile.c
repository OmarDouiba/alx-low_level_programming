#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_open;
	ssize_t f_read;
	ssize_t f_write;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}

	f_open = open(filename, O_RDONLY);
	if (f_open == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	f_read = read(f_open, buf, letters);
	if (f_read == -1)
	{
		free(buf);
		return (0);
	}

	f_write = write(STDOUT_FILENO, buf, letters);
	if (f_write == -1)
	{
		return (0);
	}
	return (letters);
}
