#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		int i = 48;

		while (i < 58)
		{
			if (i > n)
			{
				putchar(n);
				putchar(i);
				if (n == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
