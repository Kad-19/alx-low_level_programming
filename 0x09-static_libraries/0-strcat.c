#include <stdio.h>

/**
 *_strcat - concatenates two strings
 *@dest: array of characters
 *@src: array of characters
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	i++;
	dest[i] = '\0';

	return (dest);
}
