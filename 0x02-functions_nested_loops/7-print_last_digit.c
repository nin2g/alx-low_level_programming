#include "main.h"

/**
 * print_last_digit - should print the last digit of a number.
 * @n: the input number for the code.
 * Return: should return the last digit of the input.
 */

int print_last_digit(int n)

{
	int lastdigit;

	lastdigit = n % 10;
	if (lastdigit < 0)
	{
	lastdigit = lastdigit * -1;
	}
	_putchar(lastdigit + '0')
	return (lastdigit);
}
