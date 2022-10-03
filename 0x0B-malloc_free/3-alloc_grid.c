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
	int **a;
	int life, i, j;

	if (width <= 0 || height <= 0)
		return (0);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == 0)
	{
		free(a);
		return (0);
	}
	for (life = 0; life < height; life++)
	{
		*(a + life) = (int *)malloc(sizeof(int) * width);
		if (*(a + life) == 0)
		{
			for (i = 0; i < life; i++)
				free(*(a + i));
			free(a);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(a + i) + j) = 0;
	}
	return (0);
}

