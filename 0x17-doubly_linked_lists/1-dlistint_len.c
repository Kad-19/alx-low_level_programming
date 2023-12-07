#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of nodes
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodenum = 0;
	dlistint_t *curr = (dlistint_t *)h;

	while (curr != NULL)
	{
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
