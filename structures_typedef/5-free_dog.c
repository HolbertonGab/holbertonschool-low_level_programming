#include <stdio.h>

/**
 * free_dog - function that frees dogs
 * @d: pointer to the dog object to be freed
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
