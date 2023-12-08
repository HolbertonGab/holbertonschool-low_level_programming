#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		hash_node_t *current = ht->array[index];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			if (current->next != NULL)
			{
				printf(", ");
			}
			current = current->next;
		}
	}
	printf("}\n");
}
