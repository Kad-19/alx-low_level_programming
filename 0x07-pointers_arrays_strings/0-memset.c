#include <stdio.h>

/**
 *_memset - fills memory with a constant byte
 *@s: a pointer
 *@b: a constant byte
 *@n: an integer
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (*s);
}
