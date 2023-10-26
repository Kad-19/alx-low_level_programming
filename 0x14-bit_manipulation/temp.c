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
 * get_bit - returns the bit at a specified index
 * @n: the decimal number
 * @index: the index of the binary bit
 * Return: the bit at the specified index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	unsigned int i = 0;
	unsigned int j = 0;

/*	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	while (temp > 0)
	{
		temp >>= 1;
		i++;
	}*/
	temp = n;
	while (j >= 0)
	{
		if (j == index)
			return (last_bit(temp));
		temp >>= 1;
		j++;
	}
	return (-1);
}

