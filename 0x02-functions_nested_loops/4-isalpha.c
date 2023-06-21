#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * Returns: should return 1 for  alphabetic character otherwise 0.
 * @c: the input character to be checked.
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
