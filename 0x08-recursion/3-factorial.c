#include "main.h"

/**
  * factorial - returns the factorial of a number.
  * @n: factorial to be determined.
  * Return: if n is lower than 0 return -1, if n is 0
  * return 1 otherwise return the value of factorial
  */

int factorial(int n)
{
	if (n < 0)
	{
		return(-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

