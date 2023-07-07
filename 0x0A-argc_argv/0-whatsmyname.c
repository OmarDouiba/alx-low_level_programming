#include <unistd.h>
#include "main.h"
/**
* main - program that prints its name, followed by a new line.
* @argc: Number of arguments.
* @argv: Array of arguments.
*
* Auth: DOUIBA Omar.
*
* Return: 0.
*/

int main(int argc, char *argv[])
{
	_puts(argv[argc - 1]);
	return (0);
}

/**
* _puts -  function that prints a string, followed by a new line, to stdout.
* @str: string.
*
* Auth: DOUIBA Omar.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
