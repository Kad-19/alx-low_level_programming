#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints members of a list
 * @h: the pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodenum = 0;
	list_t *curr = (list_t *)h;

	while (curr != NULL)
	{
		printf("[%u] ", curr->len);
		if (curr->str == NULL)
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		else
		{
			printf("[%u] ", curr->len);
			printf("%s\n", curr->str);
		}
		curr = curr->next;
		nodenum++;
	}
	return (nodenum);
}
