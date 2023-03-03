#include "main.h"

/**
  * reverse_array - reverses the content
  * of an array
  * @a: array to be reversed
  * @n: number of elements of array
  * Return: nothing
  */

void reverse_array(int *a, int n)
{
	int i = 0; 
	int tmp;

	while (i < n)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;
		n--;
		i++;
	}
}
