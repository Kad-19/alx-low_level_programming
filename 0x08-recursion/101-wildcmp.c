#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: a string
 * @s2: a string
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	if (*s1 != *s2)
	{
		return (1);
	}
	else
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
}
