#include "main.h"

/**
  * _puts - prints out a string to stdout
  *
  * @str: string literal to be printed
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
