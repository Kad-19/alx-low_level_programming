#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - frees the memory allocated for the list
 * @h: the pointer to the first node
 * Return: the legth of the list freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *curr = *h;
	listint_t *temp = curr;

	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
		len++;
	}
	*h = NULL;
	return (len);
}
