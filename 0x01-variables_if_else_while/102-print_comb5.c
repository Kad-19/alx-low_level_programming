#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digits
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
				int j = 48;

				while (j < 58)
				{
					if ((k > n) || (k == n && j > i))
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						putchar(k);
						putchar(j);
					}
					if ((n != 57 || i != 56) && ((k > n) || (k == n && j > i)))
					{
						putchar(',');
						putchar(' ');
					}
					j++;
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
