#include "main.h"

/**
  * malloc_checked - Allocates memory
  * @x: the size to allocate
  *
  * Return: Nothing.
  */

void *malloc_checked(unsigned int x)
{
	void *p;

	p = malloc(x);

	if (p == NULL)
		exit(98);

	return (p);
}
