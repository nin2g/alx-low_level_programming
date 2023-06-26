#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps two integer values.
 * @x: the first integer value.
 * @y: the second integer.
 * Return: should return nothing.
 */

void swap_int(int *x, int *y)

{
	int temp = *x;
	*x = *y;
	*y = temp;
}
