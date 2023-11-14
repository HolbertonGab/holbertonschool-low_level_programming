#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - exec function given as a para on each element of an array
 *
 * @array: the array
 * @size: the size of the array
 * @action: pointer toi the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (name != NULL && f != NULL)
		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
