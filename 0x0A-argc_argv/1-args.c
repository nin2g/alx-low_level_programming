#include "main.h"
#include <stdio.h>

/**
 * main - prints number of args
 * @argc - the count of arguments
 * @argv - the argument vector
 * Return: should return 0.
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
