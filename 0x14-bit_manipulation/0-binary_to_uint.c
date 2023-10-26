#include "main.h"
/**
 * binary_to_uint - converts a binary to an integer
 * @b: a string that contains the binary number
 * Return: the decimal number, 0 if b is NULL or b contains other than 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '1')
			num += pow(2, strlen(b) - i - 1);
		else if (b[i] != '0')
			return (0);
		i++;
	}
	return (num);
}
