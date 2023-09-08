#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - checks if malloc returns succesfully
 * @b: size of memory
 * Return: address of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
