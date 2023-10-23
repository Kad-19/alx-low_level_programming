#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the memory allocated for the list
 * @head: the pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *temp = curr;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
