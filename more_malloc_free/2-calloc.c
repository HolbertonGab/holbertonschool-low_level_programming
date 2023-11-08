#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that allocates memory for an array.
 *
 * @nmemb: number of elements, each one with a size of size bytes.
 * @size: size of memory.
 *
 * Return: always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize = 0;
	unsigned int i = 0;
	char *memory = 0;

	if  (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalSize = nmemb * size;
	memory = malloc(totalSize);
	if (memory == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < totalSize; i++)
	{
		memory[i] = 0;
	}
	return (memory);
}
