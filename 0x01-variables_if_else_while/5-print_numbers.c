#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - entry point
  *
  * Description: prints all single digit number
  *
  * Return: always 0
  */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

