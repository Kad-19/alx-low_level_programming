#include <stdio.h>

/**
 *swap_int - swaps two numbers
 *@a: integer pointer
 *@b: integer pointer
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
