#include <stdio.h>

/**
 * main - prints hex digits in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	n = 97;
	while (n < 103)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
