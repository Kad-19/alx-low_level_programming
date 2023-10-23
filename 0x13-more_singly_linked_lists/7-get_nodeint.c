#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the node as the specified index
 * @index: location of the required node on the list
 * @head: the pointer to the first node
 * Return: a pointer to the node required
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodenum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (index == nodenum)
			break;
		curr = curr->next;
		nodenum++;
	}
	return (curr);
}
