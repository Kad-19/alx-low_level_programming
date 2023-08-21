#include <stdio.h>
#include "main.h"
/**
 *print_rev - prints a string in reverse order
 *@s: array of characters
 */
void print_rev(char *s)
{
	int i = 0;

	while (i > -1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
