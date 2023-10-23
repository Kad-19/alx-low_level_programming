#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: a pointer that points to the first node
 * @n: the integer of the new node
 * Return: a pointer that points to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	int num  = (int)n;
	listint_t *curr = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;

	return (curr->next);
}
