#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h:a pointer to a list_t structure
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elementsCount = 0;

	while (h != NULL)
		{
		h = h->next;
		elementsCount++;
		}
	return (elementsCount);
}
