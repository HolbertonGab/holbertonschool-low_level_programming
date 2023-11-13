#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print struct dog
 * @d: pointer to struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->age && d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}
