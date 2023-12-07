#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - adds a node to the beginning of a list
 * @head: a pointer that points to the first node
 * @n: the integer of the new node
 * Return: a pointer that points to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	int num  = (int)n;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		*head->prev = new;
	*head = new;

	return (*head);
}
