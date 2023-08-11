#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
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
			int k = 48;

			while (k < 58)
			{
				if (i > n && k > i)
				{
					putchar(n);
					putchar(i);
					putchar(k);
					if (n == 55)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
