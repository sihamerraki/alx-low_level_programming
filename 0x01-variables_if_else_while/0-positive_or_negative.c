#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- Define if a number positive , negative or zero.
 *
 * Return: 0  if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
return (0);
}
