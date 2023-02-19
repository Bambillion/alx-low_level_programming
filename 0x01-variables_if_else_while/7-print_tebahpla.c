#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: print the lowercase alphabet in reverse
  *
  * Return: Always 0
  */

int main(void)
{
	char n = 'z';

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
