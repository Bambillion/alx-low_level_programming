#include "main.h"
#include "6-abs.c"

/**
  * print_last_digit - main entry
  *
  * Description: a function that prints the last
  * digit
  *
  * @n: The integer whose last value would be determined
  *
  * Return: 0
  */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}

