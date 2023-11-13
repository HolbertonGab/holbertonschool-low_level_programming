#ifndef DOG_H
#define DOG_H
/**
 * struct dog - all informations about the dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void print_dog(struct dog *d);
#endif
