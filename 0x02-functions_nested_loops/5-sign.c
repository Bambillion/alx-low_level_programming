#include "main.h"

/**
  * print_sign - main entry
  *
  * Description: is a function that prints
  * out the sign of a number
  *
  * @n: is the integer that carries the sign
  *
  * Return: 1 if positive, 0 if zero and -1 if
  * negative
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}

