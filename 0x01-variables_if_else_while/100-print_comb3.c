#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Description: A program that prints all possible different combination
  * of two digits and only the smallest combination of two digits should be
  * printed
  *
  * Return: Always 0
  */

int main(void)
{
	int a;
	int b;

	for (a = 10; a <= 19; a++)
	{
		for (b = 10; b <= 19; b++)
			if ((b % 10) > (a % 10))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				if (a != 18 || b != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}

