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

		while (i < 58)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
