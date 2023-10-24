#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the specified index
 * @index: location of the required node on the list
 * @head: the pointer to the first node
 * Return: 1 if delete seccessfull , 0 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodenum = 0;
	listint_t *curr = *head;
	listint_t *new;
	listint_t *next;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		next = curr->next;
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
		free(new);
	}
	return (1);
}
