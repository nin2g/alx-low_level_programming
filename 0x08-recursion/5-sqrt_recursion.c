#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - gives the natural square root of a number
 * @n: the input to be checked
 * Return: If n does not have a natural square root,
 * the function should return -1
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates the naturat square root
 * @n: the input number
 * @i: iterative number
 * Return: the natural square root.
 */



int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
