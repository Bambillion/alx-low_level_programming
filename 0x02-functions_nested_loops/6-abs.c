#include "main.h"

/**
  * _abs - main entry
  *
  * Description: A function that computes the
  * absolute value of an integer
  *
  * @n: integer to be made absolute
  *
  * Return: int or int negative
  */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (n * -1);
}
