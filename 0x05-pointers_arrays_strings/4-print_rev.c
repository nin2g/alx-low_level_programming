#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints reverse of a string.
 * @str: the string to print.
 * Return: void.
 */

void print_rev(char *str)

{

	int c = 0;

	while (str[c] != '\0')
	{
	c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	_putchar(str[c]);
	}
	_putchar('\n');
}
