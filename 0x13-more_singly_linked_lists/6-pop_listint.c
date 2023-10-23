#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - deletes the first node
 * @head: a pointer that points to a pointer that points to the first node
 * Return: an integer of the head node, 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int num;

	new = *head;
	if (*head == NULL)
		return (0);
	num = new->n;
	*head = new->next;
	free(new);
	return (num);
}
