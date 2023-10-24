#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - prints integer members of a list
 * @head: the pointer to the first node
 * Return: the pinter to the first node of the revesed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *node;

	while (curr != NULL)
	{
		if (curr == *head)
		{
			curr = curr->next;
			(*head)->next = NULL;
			node = *head;
			continue;
		}
		node = curr->next;
		curr->next = *head;
		*head = curr;
		curr = node;
	}
	return (*head);
}
