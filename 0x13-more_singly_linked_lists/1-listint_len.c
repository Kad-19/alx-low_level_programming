#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of nodes
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
