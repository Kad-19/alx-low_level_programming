#include <stdio.h>

/**
 *_strspn - gets the length of a prefix substring
 *@s: an array of characters
 *@accept: an array of characters
 *Return: num
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	int j = 0;

	int num = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				num++;
			}
			j++;
		}
		i++;
	}
	return (num);
}
