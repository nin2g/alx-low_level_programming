#include <unistd.h>

/**
 * _putchar - sends the racter c to standard output.
 * @c: The character to print.
 * Return: Only returns 1 when successful.
 * When an error is encounted, return -1, and set errno appropriately
 */

int _putchar(char c)

{

	return (write(1, &c, 1));
}
