#include <stdio.h>
#include "main.h"
/**
 *reverse_array - reverses an array
 *@a: array of integers
 *@n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int j = 0;

	int temp[n];

	while (i < n)
	{
		temp[i] = a[i];
		i++;
	}
	i = n - 1;
	while (i >= 0)
	{
		s[j] = temp[i];
		i--;
		j++;
	}
}
