#include "main.h"

/**
 * _isdigit - to check if a character is a digit.
 * @c: the input to be checked.
 * Return: should return 1 if input is a digit otherwise 0.
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
