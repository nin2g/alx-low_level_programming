#include <stdio.h>
/**
 * main - prints the alphabet in lower case except q and e.
 * Return: should return 0.
 */

int main(void)
{
	char lc, e, q;

	e = 'e';
	q = 'q';

	for (lc = 'a'; lc <= 'z'; lc++)
	{
	if (lc != e && lc != q)
	putchar(lc);
	}
	putchar('\n');
	return (0);
}
