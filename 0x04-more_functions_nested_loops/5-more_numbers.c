#include "main.h"

/**
  * more_numbers - function that prints 10 times
  * the numbers from 0 to 14
  *
  */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}