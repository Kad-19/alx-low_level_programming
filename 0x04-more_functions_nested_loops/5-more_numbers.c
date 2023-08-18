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
		int i = 0;

		while (i < 10)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
