#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Write a function that frees a 2 dimensional grid.
 *
 * @grid: the grid.
 * @height: height of the grid.
 *
 * Return: 0 if success.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
