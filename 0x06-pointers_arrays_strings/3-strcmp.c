#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: array of characters
 * @s2: array of characters
 * Return: cmp
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		cmp = cmp + s1[i] - s2[i];
		i++;
	}

	return (cmp);
}
