#include "main.h"

/**
 * print_sign - checks sign of a number and prints.
 * @n: the input number to be checked.
 * Return: should return 1 for positive number, -1 for negative otherwise 0.
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
