#include <stdio.h>
#include <stdlb.h>
#include "main.h"

/**
 * malloc_checked - checks if malloc returns succesfully
 * @b: size of memory
 * Return: address of allocated memory
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
