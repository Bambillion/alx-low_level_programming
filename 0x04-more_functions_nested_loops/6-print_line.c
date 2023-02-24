#include "main.h"

/**
  * print_line - a function thatee
  * prints a straight line
  *
  * @n: integer that detrmines how many
  * lines to be printed
  */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
