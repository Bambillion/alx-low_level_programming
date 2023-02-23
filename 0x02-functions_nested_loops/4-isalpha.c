#include "main.h"

/**
  * _isalpha - a function that checks
  * for alphabetic character
  *
  * @c: charcacter value that would be
  * checked
  *
  *
  * Return: 1 if c is a letter lowercase, uppercase
  * and return 0 otherwise
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
