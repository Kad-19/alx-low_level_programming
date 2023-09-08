#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * @n: size of character to concat form s2
 * Return: concat of s1 and s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conct;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	if (ci > n)
		ci = n;
	conct = malloc(sizeof(char) * (i + ci + 1));

	if (conct == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		conct[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		conct[i] = s2[ci];
		i++, ci++;
	}
	conct[i] = '\0';
	return (conct);
}
