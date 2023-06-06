#include "main.h"
#include "_putchar.c"

/**
  * _memset - write n bytes of char b to pointer s
  * @s: memory area to be filled
  * @b: hexa code to write memory
  * @n : size of memory area to be filled
  * Return: returns pointer to memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 && i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
