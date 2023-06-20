#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lower case.
 * Return: Should return 0.
 */

int main(void)

{
	int g;
	char lc;

	for (g = '0'; g <= '9'; g++)
	putchar(g);

	for (lc = 'a'; lc <= 'f'; lc++)
	putchar(lc);
	putchar('\n');
	return (0);
}	
