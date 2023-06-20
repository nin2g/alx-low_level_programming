#include "main.h"

/**
 * _islower - Will be used to identify lowercase character.
 * @: represents the character to be checked.
 * Return: To return 1 for lower case letters otherwise return 0.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
