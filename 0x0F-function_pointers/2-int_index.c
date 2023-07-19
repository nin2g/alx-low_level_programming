#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: the array
  * @size: number of elements in the array array
  * @cmp: pointer to the function to be used to compare values
  * Return: should return nothing
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
