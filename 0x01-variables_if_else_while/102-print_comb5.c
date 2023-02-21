#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - enrry point
  *
  * Description: This function prints all possible
  * combination of two two-digit numbers the numbers range
  * from 0 to 99
  *
  * Return: Always 0
  */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if (!(a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
