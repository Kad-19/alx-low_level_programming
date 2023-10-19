#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of nodes
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodenum = 0;
	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
