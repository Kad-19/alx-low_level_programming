#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the memory allocated for the list
 * @head: the pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *temp = curr;

	while (curr != NULL)
	{
		free(curr->str);
		temp = curr;
		curr = curr->next;
		free(temp);
	}
}
