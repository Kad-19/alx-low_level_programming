#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
	int lz = 1;
	unsigned long int bin = 1;

	bin = bin << (sizeof(unsigned long int) * 8 - 1);
	while (bin > 0)
	{
		if (bin & n)
			lz = 0;
		if (lz == 0)
		{
			if (bin & n)
				_putchar('1');
			else
				_putchar('0');
		}
		bin = bin >> 1;
	}
}
