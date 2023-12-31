#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at the specified index
 * @idx: location of the required node on the list
 * @h: the pointer to the first node
 * @n: the data of the new node to be inserted
 * Return: a pointer to the node inserted
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodenum = 0;
	dlistint_t *curr = *h;
	dlistint_t *new;
	dlistint_t *next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		next = *h;
		if (*h != NULL)
			next->prev = new;
		*h = new;
		return (new);
	}
	while (curr->next != NULL)
	{
		if (idx == nodenum + 1)
			break;
		curr = curr->next;
		nodenum++;
	}
	if (curr->next == NULL)
	{
		free(new);
		return (NULL);
	}
	next = curr->next;
	new->n = n;
	new->next = next;
	if (next != NULL)
		next->prev = new;
	curr->next = new;

	return (new);
}
