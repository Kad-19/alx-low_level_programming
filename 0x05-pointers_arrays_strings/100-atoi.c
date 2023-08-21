#include <stdio.h>

/**
 *_atoi - converts a string to integer;
 *@s: array of characters
 *Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;

	int res = 0;

	int i = 0;

	while (s[i] == ' ')
		i++;
	while (s[i] == '-' || s[i] == '+' || s[i] == ' ' || s[i] >= 65)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
			return (sign == -1 ? INT_MIN : INT_MAX);
		res = res * 10 + (s[i++] - '0');
	}
	return (res * sign);
}
