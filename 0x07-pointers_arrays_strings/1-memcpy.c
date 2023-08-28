#include <stdio.h>

/**
 *_memcpy - copies memory area
 *@dest: a pointer
 *@src: a pointer
 *@n: an integer
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
