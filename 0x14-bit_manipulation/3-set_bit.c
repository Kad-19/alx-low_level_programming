#include "main.h"
/**
 * set_bit - sets a bit at the given index of the binary equivalent
 * @n: a pointer pointing ot the decimal number
 * @index: the position to be set to 1
 * Return: 1 if success, -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bin <<= index;
	*n = *n | bin;
	return (1);
}





