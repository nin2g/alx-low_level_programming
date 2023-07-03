#include "main.h"

/**
 * _strspn -  gets the length of a prefix string
 * @s: initial segment
 * @accept: the specific bytes to look out for
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, v, c;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
			v++;
			c = 1;
			}
		}
		if (c == 0)
			return (v);
	}
	return (v);
}
