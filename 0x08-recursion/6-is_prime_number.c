#include "main.h"

/**
*check_prime - check if a number is prime
* @n: an integer
* @i: an integer
* Return: 1 if n is prime 0 otherwise
*/
int check_prime(int n, int i)
{
	if (n == 2)
		return (1);
	if (n % i == 0 || n == 1 || n < 0)
		return (0);
	if (i * i > n)
		return (1);
	return (check_prime(n, i + 1));
}

/**
 *is_prime_number - checks if a number is prime
 *check_prime - check if a number is prime
 *@n: an integer
 *Return: 1 if n is prime 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
