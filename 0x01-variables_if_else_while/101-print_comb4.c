#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Description: A program that prints all possible different
  * combinations of three digits, numbers must be seperated by  ','
  * followed by a space
  *
  * Return: Always zero
  */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (c > b && b > a)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
