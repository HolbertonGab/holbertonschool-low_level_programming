#include <stdlib.h>
#include "main.h"

/**
 * *array_range - function that creates an array of integers.
 *
 * @min: beginning of array.
 * @max: end of array.
 *
 * Return: always 0.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *NewArray = NULL;

	if (min > max)
	{
		return (NULL);
	}
	NewArray = malloc((max - min + 1) * (sizeof(int)));
	if (NewArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max; i++)
	{
		NewArray[i] = min;
		min++;
	}
	return (NewArray);
}
