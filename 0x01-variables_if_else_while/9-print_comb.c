#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: A program that prints all possible combinations of single
  * digit numbers, numbers must be seperated by ',' followed by a space
  * numbers should be printed in ascending order
  *
  * Return: Always 0
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		if (n < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
