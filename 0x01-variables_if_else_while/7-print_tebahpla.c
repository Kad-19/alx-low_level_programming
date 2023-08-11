#include <stdio.h>

/**
 * main - prints lower case letters in reverse order
 *
 * Return: 0
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
