#include <stdio.h>

/**
 *_strpbrk - locates a character in a string
 *@accept: a character
 *@s: a pointer to character
 *Return: f or 0
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;

	int j = 0;

	int k = 1;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				k = 0;
				break;
			}
			j++;
		}
		if (k == 0)
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
