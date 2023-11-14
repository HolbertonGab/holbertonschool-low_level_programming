#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: the array
 * @size: number of elements in the array
 * @cmp: pointer to compare the function
 *
 * Return: -1 if array and cmp NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
