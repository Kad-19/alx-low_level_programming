#include <stdio.h>

/**
 *cap_string - capitalizes all words of a string.
 *@str: array of characters
 *Return: str
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '.' || str[i] == '\t')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
