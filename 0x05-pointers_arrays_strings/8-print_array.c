#include <stdio.h>
#include "main.h"

/**
 *print_array - prints an array
 *@a: array of characters
 *@n: integer variable
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
