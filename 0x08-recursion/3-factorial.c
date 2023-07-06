#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: the number to be input
 * Return: If n is lower than 0, the function should return -1
 * to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
