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
/**
 * _rev_recursion - reverses string
 * @s: a string
 * @r: a string
 * @i: an integer
 * Return: a pointer
 */
char *_rev_recursion(char *s, char *r, int i)
{
	if (*s != '\0')
	{
		_rev_recursion(s + 1, r, i + 1);
		*(r - i) = *s;
	}
	return (r);
}
/**
 * _strlen_recursion - length of a string
 * @s: a string
 * Return: an intiger
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: a string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i;

	char rev[100];

	i = _strlen_ recursion(s);
	rev = _rev_recursion(s, rev + i, 0);
	return (wildcamp(s, rev));
}
