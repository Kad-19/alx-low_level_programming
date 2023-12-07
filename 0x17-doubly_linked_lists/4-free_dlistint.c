#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees the memory allocated for the list
 * @head: the pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *temp = curr;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
