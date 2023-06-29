#include "main.h"

/**
 * _strncpy - copies at most one input number of bytes from src to dest
 * @dest: the buffer storig the string copy
 * @src: the source string
 * @n: the maximum number of bytes copied
 * Return: should return a pointer to string dest result
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
