#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: a pointer that points to the first node
 * @n: the integer of the new node
 * Return: a pointer that points to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int num  = (int)n;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = num;
	new->next = *head;
	*head = new;

	return (*head);
}
