#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of a list
 * @head: a pointer that points to the first node
 * @n: the integer of the new node
 * Return: a pointer that points to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	int num  = (int)n;
	dlistint_t *curr = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (*head);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
	new->prev = curr;

	return (curr->next);
}
