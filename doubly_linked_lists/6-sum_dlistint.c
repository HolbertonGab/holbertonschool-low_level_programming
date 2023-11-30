#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a linked list
 *
 * @head: the head of the dlistint_t
 *
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
