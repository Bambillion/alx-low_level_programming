#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: The main fucntion prints all the numbers
  * of base 16 in lowercase, followed by a new line
  *
  * Return: Always 0
  */

int main(void)
{
	int n;
	char h;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar('\n');
	return (0);
}
