#include <stdio.h>
#include "main.h"

/**
 *puts2 - prints every other character of a string
 *@str: array of characters
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
		if (str[i - 1] == '\0')
			break;
	}
	_putchar('\n');
}
