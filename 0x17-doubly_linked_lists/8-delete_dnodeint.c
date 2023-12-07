#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at the specified index
 * @index: location of the required node on the list
 * @head: the pointer to the first node
 * Return: 1 if delete seccessfull , 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodenum = 0;
	dlistint_t *curr = *head;
	dlistint_t *new;
	dlistint_t *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next = curr->next;
		next->prev = NULL;
		*head = next;
		free(curr);
	}
	else
	{
		while (curr != NULL)
		{
			if (index == nodenum + 1)
				break;
			curr = curr->next;
			nodenum++;
		}
		new = curr->next;
		next = new->next;
		curr->next = next;
		next->prev = curr;
		free(new);
	}
	return (1);
}
