#include "main.h"
#include <stdio.h>

/**
  * print_array - prints elements of an array
  * Description: prints 'n' elements of an array of integers
  * @a: array pointer
  * @n: int type integer
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
