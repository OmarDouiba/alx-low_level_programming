#include "main.h"
/** read_textfile - Funtion that read and prints a text file to the POSIX
*		standard output.
* filename: Name of the file to be read.
* letters: Number of letters to be printed.
*
* Return: 0 if the ouccer any error, otherwise number of chars printed.
*/
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
	if (buf == NULL)
	{
		return (0);
	}
	f_read = read(f_open, buf, letters);
	if (f_read == -1)
	{
		free(buf);
		return (0);
	}

	f_write = write(STDOUT_FILENO, buf, f_read);
	if (f_write == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(f_open);
	return (f_write);
}
