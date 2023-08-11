#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints message according to the random number
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	int lastd;

	lastd = n % 10;
	if (lastd > 5)
	{
		printf(" %d and is greater than 5\n", lastd);
	}
	else if (lastd == 0)
	{
		printf(" %d and is 0\n", lastd);
	}
	else
	{
		printf(" %d and is less than 6 and not 0\n", lastd);
	}
	return (0);
}
