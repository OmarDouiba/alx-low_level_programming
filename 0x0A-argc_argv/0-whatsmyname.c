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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
