#include <stdio.h>

/**
 *_atoi - converts a string to integer;
 *@s: array of characters
 *Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;

	int result = 0;

	int i = 0;

	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i++] - '0');
	}
	return (result * sign);
}
