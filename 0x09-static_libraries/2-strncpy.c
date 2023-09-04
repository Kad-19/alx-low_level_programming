#include <stdio.h>
#include "main.h"
/**
 *_strncpy - copy a string
 *@src: array of characters
 *@dest: array of characters
 *@n: number of characters to be copied
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (i > -1)
	{
		if (src[i] == '\0')
			break;
		i++;
	}
	while (j <= i && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
