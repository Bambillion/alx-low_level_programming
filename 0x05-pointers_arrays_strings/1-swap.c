#include "main.h"

/**
  * swap_int - entry point
  * Description: swaps the values of the two
  * integer reference
  * @a: first integer
  * @b: second integer
  */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;

	*b = c;
	*a = d;
}
