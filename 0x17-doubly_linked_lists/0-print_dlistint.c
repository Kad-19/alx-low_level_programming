#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints integer members of a list
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodenum = 0;
	dlistint_t *curr = (dlistint_t *)h;

	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
