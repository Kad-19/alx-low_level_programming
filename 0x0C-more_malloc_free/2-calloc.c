#include <stdlb.h>
#include "main.h"
/*
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: size of array
 * @size: size of each element
 * Return: address of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (malloc(nmemb * size))
		return (NULL);
	*malloc(nmemb * size) = 0;
	return (malloc(nmemb * size));
}
