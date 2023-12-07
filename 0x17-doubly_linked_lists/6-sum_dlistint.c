#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - gets the sum of all data in the list
 * @head: the pointer to the first node
 * Return: the sum of all the data in the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
