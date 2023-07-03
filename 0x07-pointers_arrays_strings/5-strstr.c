#include "main.h"

/**
 * _strstr - locates a substring.
 * @needle: the substring to be located
 * @haystack: the string to be searched.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if string is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *ned = needle;

		while (*hay == *ned && *ned != '\0')
		{
			hay++;
			ned++;
		}
		if (*ned == '\0')
			return (haystack);
	}
	return (NULL);
}
