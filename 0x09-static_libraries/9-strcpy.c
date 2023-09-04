#include <stdio.h>
#include "main.h"
/**
 *_strcpy - copy a string
 *@src: array of characters
 *@dest: array of characters
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (i > -1)
	{
		if (src[i] == '\0')
			break;
		i++;
	}
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
