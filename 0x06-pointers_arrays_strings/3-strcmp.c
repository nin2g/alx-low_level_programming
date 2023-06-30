#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2 pointer to the second string
 * Return:should return 0 if str1 == str2
 * Othrewise should return difference of sutracting str1 from str1.
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1  - *s2);
}
