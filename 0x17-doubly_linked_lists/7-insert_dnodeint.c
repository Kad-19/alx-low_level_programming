#include <stdio.h>
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
		if (*h != NULL)
			*h->prev = new;
		*h = new;
		return (new);
	}
	while (curr != NULL)
	{
		if (idx == nodenum + 1)
			break;
		curr = curr->next;
		nodenum++;
	}
	next = curr->next;
	new->n = n;
	new->next = next;
	if (next != NULL)
		next->prev = new;
	curr->next = new;

	return (new);
}
