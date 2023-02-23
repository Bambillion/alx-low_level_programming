#include "head.h"

/**
  * _isdigit - is a function that checks if a
  * character is a digit
  *
  * @c: The character is to be checked
  * Return: 1 if c is a digit and 0 otherwise
  */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
