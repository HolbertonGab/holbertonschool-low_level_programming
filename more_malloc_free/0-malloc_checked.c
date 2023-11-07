#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory.
 *
 * @b: .
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr = malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		exit(98);		
	}
	return(ptr);
}
