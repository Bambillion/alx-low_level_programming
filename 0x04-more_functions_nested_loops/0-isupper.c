#include "head.h"

/**
  * _isupper - main entry
  * Description: This is a function that checks
  * upper case of a character
  *
  * @c: is the character to be checked
  * Return: 1 if upper and 0 otherwise
  */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
