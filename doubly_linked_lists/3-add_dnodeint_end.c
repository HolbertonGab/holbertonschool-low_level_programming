#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 *
 * @head: the head of the dlistint_t
 * @n: integer value that will be stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	newNode->prev = last;
	last->next = newNode;

	return (newNode);
}
