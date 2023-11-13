#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: to the pointer.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;
	int name_len = 0;
	int owner_len = 0;
	int i, x;

	if (name == NULL || owner == NULL)
		return (NULL);
	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);
	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	NewDog->name = malloc(name_len + 1);
	NewDog->owner = malloc(owner_len + 1);
	if (NewDog->name == NULL || NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog->owner);
		free(NewDog);
	}
	for (i = 0; i <= name_len; i++)
	{
		NewDog->name[i] = name[i];
	}
	for (x = 0; x <= owner_len; x++)
	{
		NewDog->owner[x] = owner[x];
	}
	NewDog->age = age;

	return (NewDog);
}
