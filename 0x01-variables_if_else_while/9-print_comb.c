#include <stdio.h>

/**
 * main - prints digits form 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		n++;
	}
	putchar('\n');
	return (0);
}
