#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints whether the random number is positive, negative or zero.
 * Return: should return 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
		printf("is positive");
	else if (n==0)
		printf("is zero");
	else
		printf("is negaive");
	return (0);
}
