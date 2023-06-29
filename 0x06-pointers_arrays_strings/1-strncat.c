#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 * @src: the string to be appended to dest.
 * @dest: the string to be appended to.
 * @n: the number of bytes.
 * Return: should return a pointer to the string dest result.
 */

char *_strncat(char *dest, char *src, int n)

{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}

