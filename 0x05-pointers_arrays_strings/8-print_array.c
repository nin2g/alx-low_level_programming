#include "main.h"
#include <stdio.h>

/**
 * print_array - prnts elements of an array of integers.
 * @x: array of integers.
 * @y: number of array elements
 * Return:void.
 */

void print_array(int *x, int y)

{
	int j;

	for (j = 0; j < y; j++)
	{
	printf("%d", x[j]);
	if (j != (y - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
