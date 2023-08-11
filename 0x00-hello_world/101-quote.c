#include <stdio.h>

/**
 * main - prints a message
 *
 * Return: 1
 */
int main(void)
{
	char mes[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	while (mes[i] != '\0')
	{
		putchar(mes[i]);
		i++;
	}
	return (1);
}
