#include <stdlib.h>

/**
 * **alloc_grid - dynamically create 2d array and initialize each element to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2d array or NULL if failure ocuurs
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, m;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (m = 0; m < width; m++)
			grid[k][m] = 0;
	}
	return (grid);
}

