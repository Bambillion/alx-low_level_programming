#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main -  Entry point
  *
  * Description: Programme generates a random number and
  * identifies if it is a zero, positive or negative integer
  * value
  *
  * Return: 0 always
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
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
