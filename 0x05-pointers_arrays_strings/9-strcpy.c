#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: the destination value
 * @src: the source value
 * Return: the pointer to the dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i++] = '\0';
return (dest);
}
