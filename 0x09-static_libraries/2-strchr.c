#include <stdio.h>

/**
 *_strchr - locates a character in a string
 *@c: a character
 *@s: a pointer to character
 *Return: f or 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
		if (s[i] == '\0')
		{
			return (0);
		}
	}
	return (s + i);
}
