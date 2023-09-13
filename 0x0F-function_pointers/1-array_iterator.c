#include <stdio.h>
#include "main.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: an array of integers
 * @size: size of the array
 * @action: function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i > size)
	{
		(*action)(array[i]);
		i++;
	}
}
