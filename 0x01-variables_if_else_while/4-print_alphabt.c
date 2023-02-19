#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - main entry
  *
  * Description: Main generates alphabet in lowercase
  * except 'q' and 'e'
  *
  * Return: always 0
  */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
		return (0);
}
