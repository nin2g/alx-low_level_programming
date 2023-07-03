#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: the set of bytes to be searched.
 * @accept: the string to be searched.
 * Return: should return a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}

	}
	return (NULL);
}
