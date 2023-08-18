#include "main.h"

/**
 * more_numbers - prints numbers for 0 to 9 ten times
 *
 * Return: void.
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		int i = 48;

		int k = 0;

		while (i < 58)
		{
			if (k == 1 && i == 53)
			{
				break;
			}
			if (k == 1)
			{
				_putchar('1');
			}
			_putchar(i);
			i++;
			if (i == 58 && k == 0)
			{
				k = 1;
				i = 48;
			}
		}
		_putchar('\n');
		j++;
	}
}
