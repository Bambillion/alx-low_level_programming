#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Program generates random and decides if the number generated
 * is greater than 5, or is 0 or is less than 6
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int v;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	v = n % 10;

	if (v > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, v);
	}
	else if (v == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, v);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, v);
	}
	return (0);
}
