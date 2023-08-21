#include <stdio.h>
#include "main.h"
/**
 *rev_string - reverses a string
 *@s: array of characters
 */
void rev_string(char *s)
{
	int i = 0;

	int j = 0;

	char temp[1000];

	while (i > -1)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	i--;
	while (i >= 0)
	{
		temp[j] = s[i];
		i--;
		j++;
	}
	j--;
	while (j >= 0)
	{
		s[j] = temp[j];
		j--;
	}
}
