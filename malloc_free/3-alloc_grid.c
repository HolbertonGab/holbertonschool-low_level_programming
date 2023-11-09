#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - function that returns a pointer to a 2D array of integers.
 *
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: 0 if successful
 */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **array_pointer = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array_pointer = malloc(sizeof(int *) * height);
	if (array_pointer == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
	array_pointer[h] = malloc(width * sizeof(int));
	if (!array_pointer[h])
		{
		for (; h >= 0; h--)'
			{
			free(array_pointer[h]);
			}
	free(array_pointer);
	return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			array_pointer[h][w] = 0;
		}
	}
	return (array_pointer);
}
