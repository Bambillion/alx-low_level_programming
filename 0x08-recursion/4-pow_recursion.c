#include "main.h"

/**
  * _pow_recursion - power of x raised to y
  * @x: integer
  * @y: exponential or power
  *
  * Return: -1 if y is lower than 0, 1 if y is equal to 0, otherwise the
  * power of x to y
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}

