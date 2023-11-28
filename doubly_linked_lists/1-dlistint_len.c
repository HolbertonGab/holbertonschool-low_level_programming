#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 *
 * @h:a pointer to a dlistint_t structure
 *
 * Return: the number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elementsCount = 0;

	while (h != NULL)
		{
		h = h->next;
		elementsCount++;
		}
	return (elementsCount);
}
