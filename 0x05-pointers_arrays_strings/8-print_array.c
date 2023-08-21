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
		_putchar(a[i]);
		i++;
		if (i != n)
			printf(", ");
	}
	_putchar('\n');
}
