#include "main.h"

/**
 * _strchr - locates a chaacter in a string
 * @c: first occurrence of a character
 * @s: the string to be checked
 * Return: should return  a pointer to the first occurrence of the character.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	return (NULL);
}
