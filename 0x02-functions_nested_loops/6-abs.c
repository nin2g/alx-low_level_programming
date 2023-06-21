#include "main.h"

/**
 * _abs - should compute the absolute value of an integer.
 * @c: the input number to be computed.
 * Return: should return the absolute value of an integer otherwise 0.
 */

int _abs(int c)

{
	if (c < 0)
	{
	int ab_value;

	ab_value = c * -1;
	return (ab_value);
	}
	return (c);
}
