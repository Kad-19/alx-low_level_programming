#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints integer members of a list
 * @head: the pointer to the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr = (listint_t *)head;
	listint_t *node;
	size_t len = 0;

	while (curr != NULL)
	{
		printf("[%p] %d\n", (void *) curr, curr->n);
		len++;
		node = curr->next;
		if (node >= curr)
		{
			printf("-> [%p] %d\n", (void *) node, node->n);
			exit(98);
		}
		curr = node;
	}
	return (len);
}
