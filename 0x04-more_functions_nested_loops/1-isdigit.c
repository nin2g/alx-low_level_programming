#include "main.h"

/**
 * _idigit - to check if a character is a digit.
 * @c: the input to be checked.
 * Return: should return 1 if input is a digit otherwise 0.
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
