#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character
 * @s: the input string
 * Return: should return void
 */

void puts2(char *s)

{

	int i;
	int j=0;

	while (s[j] != '\0')
	{
	j++;
	}

	for (i = 0; i < j; i += 2)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}
