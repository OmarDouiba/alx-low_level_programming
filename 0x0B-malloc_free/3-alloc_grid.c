#include "main.h"
/**
 *alloc_grid - Function that returns
 *     a pointer to a 2 dimensional array of integers.
 *@width: Width of the 2-dimensional array.
 *@height: Height of the 2-dimensional array.
 *
 *Auth: DOUIBA Omar.
 *Return: If width <= 0, height <= 0, or the function fails - NULL.
 *        Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
	}
	for (i = 0; i < (width * height); i++)
	{
		free(grid[i]);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
