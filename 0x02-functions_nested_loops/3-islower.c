#include "main.h"

/**
  * _islower - main entry
  *
  * Description - a function taht checks for 
  * lowercase character
  *
  * Return: 1 if c is lowercase and 0 otherwise
  */

int _islower(int c)
{
	

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

