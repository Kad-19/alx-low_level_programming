#include "main.h"
/**
 * last_bit - returns the last it of the binary equivalent
 * @n: the decimal number
 * Return: the last bit
 */
int last_bit(unsigned long int n)
{
	int lz = 1;
	unsigned long int bin = 1;
	int bit;

	bin = bin << (sizeof(unsigned long int) * 8 - 1);
	while (bin > 0)
	{
		if (bin & n)
			lz = 0;
		if (lz == 0)
		{
			if (bin & n)
				bit = 1;
			else
				bit = 0;
		}
		bin = bin >> 1;
	}
	return (bit);
}
/**
 * flip_bits - how many bits need to be flipped to get one from the other
 * @n: first number
 * @m: second number
 * Return: number of bits needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;

	while (n > 0 || m > 0)
	{
		if (last_bit(n) != last_bit(m))
			bits++;
		n >>= 1;
		m >>= 1;
	}
	return (bits);
}
