#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @s: source string
 * @d: destination string
 * Return: should return a pointer to destination string.
 */

char *_strcat(char *d, char *s)

{
	int dlen = 0, i;

	while (d[dlen])
	{
		dlen++;
	}

	for (i = 0; s[i] != 0; i++)
	{
		d[dlen] = s[i];
		dlen++;
	}

	d[dlen] = '\0';
	return (d);
}
