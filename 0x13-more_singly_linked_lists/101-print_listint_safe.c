#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints integer members of a list
 * @head: the pointer to the first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *curr = (listint_t *)head;
	size_t len = 0;

	if (curr == NULL)
		return (0);
	len = 1 + print_listint_safe(curr->next);
	printf("[%p] %d\n", (void *)curr, curr->n);
	return (len);
}
