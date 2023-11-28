#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 *
 * @head: the head of the dlistint_t
 *
 */
void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}
}
