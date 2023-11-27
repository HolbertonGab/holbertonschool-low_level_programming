#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head of the list_t
 * @str:a pointer to a list_t structure
 *
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *firstNode = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (firstNode == NULL)
	{
		return (NULL);
	}

	firstNode->str = strdup(str);

	if (firstNode->str == NULL)
	{
		free(firstNode);
		return (NULL);
	}
	firstNode->len = strlen(str);
	firstNode->next = *head;
	*head = firstNode;

	return (firstNode);
}
