#include "main.h"

/**
  * _sqrt - entry point
  * @n: number
  * @x: integer
  * Return: -1 if negative and x if square root found
  */

int _sqrt(int n, int x)
{
	if (x * x > n)
		return(-1);
	if (x * x == n)
		return(x);

	return (_sqrt(n, x + 1));
}

/**
  * _sqrt_recursion - returns the square root of a number
  * @n: integer to find the square root.
  * Return: -1 if negative n if 0 or 1
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
