#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: the head of the list_t
 *
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *nextNode = 0;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current->str);
		free(current);
		current = nextNode;
	}
}
