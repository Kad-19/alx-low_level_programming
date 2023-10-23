#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints integer members of a list
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;
	listint_t *curr = (listint_t *)h;

	while (curr != NULL)
	{
		if (curr->n == 0)
		{
			printf("(nil)\n");
		}
		else
		{
			printf("%d\n", curr->n);
		}
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
