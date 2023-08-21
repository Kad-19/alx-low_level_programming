#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half of a string
 *@str: array of characters
 */
void puts_half(char *str)
{
	int i = 0;

	int half;

	while (i > -1)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	half = i / 2;
	i = i - half;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
