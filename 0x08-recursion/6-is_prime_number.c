#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the input integer
 * Return: Otherwise return 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check i fthe number is prime
 * @n: the number to be checked
 * @i: the number of iterations
 * Return: Return 1 for prime otherwise 0.
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}

