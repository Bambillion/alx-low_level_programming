#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - Entry point
  *
  * Description: The program prints the alphabet in lowercase
  * and then in uppercase as well
  *
  * Return: returns 0
  */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A' ; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
