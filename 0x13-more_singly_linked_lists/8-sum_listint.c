#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - gets the sum of all data in the list
 * @head: the pointer to the first node
 * Return: the sum of all the data in the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
