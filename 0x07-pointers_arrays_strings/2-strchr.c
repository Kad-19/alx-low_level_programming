#include <stdio.h>

/**
 *_strchr - locates a character in a string
 *@c: a character
 *@s: a pointer to character
 *Return: f
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	int j = 0;

	char *f;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				f[j] = s[i];
				j++;
			}
			break;
		}
		i++;
	}
	return (f);
}
