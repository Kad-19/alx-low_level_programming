#include "main.h"
/**
 * clear_bit - clear a bit at the given index of the binary equivalent
 * @n: a pointer pointing ot the decimal number
 * @index: the position to be cleared to 0
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bin <<= index;
	bin = ~bin;
	*n = *n & bin;
	return (1);
}





