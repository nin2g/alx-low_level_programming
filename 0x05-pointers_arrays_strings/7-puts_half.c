#include "main.h"

/**
 * puts_half - prints half of a string.
 * @s: the input string
 * Return: should return void.
 */

void puts_half(char *s)

{
	int j = 0;
	int k;

	while (s[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}

	for (; k < j; k++)
	{
	_putchar(s[k]);
	}
	_putchar('\n');
}
