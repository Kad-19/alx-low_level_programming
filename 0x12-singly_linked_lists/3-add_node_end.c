#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the beginning of a list
 * @head: a pointer that points to the first node
 * @str: the string of the new node
 * Return: a pointer that points to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	char *text = (char *)str;
	list_t *curr = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(text);
	new->len = strlen(text);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;

	return (curr->next);
}
