#include <stdio.h>

/**
 *_print_rev_recursion - prints a string in reverse
 *@s: a string to be printed in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + i);
		_putchar(s[0]);
	}
}