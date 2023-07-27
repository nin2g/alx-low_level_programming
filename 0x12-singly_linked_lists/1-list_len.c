#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @x: A linked list
  * Return: The number of elements of a list
  */

size_t list_len(const list_t *x)
{
	size_t count = 0;

	while (x)
	{
		x = x->next;
		count++;
	}

	return (count);
}
