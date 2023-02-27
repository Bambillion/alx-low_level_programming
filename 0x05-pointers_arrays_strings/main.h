#ifndef MAIN_H
#define MAIN_H
/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  *
  * Return: On success 1.
  * On error, -1 is returned and errno is set appropriately
  */

int _putchar(char c);

/**
  * reset_to_98 - return the value of a 
  * pointer
  * @*n: the pointer parameter
  * Return: void
  */

void reset_to_98(int *n);

/**
  * swap_int - swaps the values of 
  * two integers
  * @*a: first integer reference
  * @*b: second integer reference
  */
void swap_int(int *a, int *b);

#endif
