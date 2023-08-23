#include<stdlib.h>
#include "main.h"
/**
 * allo_grid - function to return pointer
 * @width: variable
 * @height: variable
 * @grid: pointer
 * Return: to return the grid
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < 1; j++)
				free(grid[j]);
			free(grid);
			return(NULL);
		}
		for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}
	return (grid);
}
