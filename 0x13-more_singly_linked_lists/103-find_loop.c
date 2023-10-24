#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - finds a loop in the list
 * @head: the pointer to the first node
 * Return: the address of the node where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *curr = head;
	listint_t *node;

	while (curr != NULL)
	{
		node = curr->next;
		if (node >= curr)
		{
			return (node);
		}
		curr = node;
	}
	return (NULL);
}
