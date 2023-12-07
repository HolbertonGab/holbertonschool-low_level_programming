#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 *
 * @key: the key for which to calculate the index
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashValue = 0;

	if (key == NULL || size == 0)
		return (0);

	hashValue = hash_djb2(key);

	return (hashValue % size);
}
