#ifndef _HEAD_H_
#define _HEAD_H_

/**
  * _putchar - writes the character c to std
  * @c: parameter to compare
  * Return: 1 or 0
  */

int _putchar(char c);

/**
  * _isupper - this function
  * checks for uppercase character
  *
  * @c: parameter that would be checked
  *
  * Return: 1 if character is uppercase
  * and 0 otherwise
  */

int _isupper(int c);

/**
  * _isdigit - this function checks for a digit
  * from 0 through 9
  *
  * @c: is the parameter that wants to be checked
  * Return: 1 if character is a digit and 0 otherwise
  */

int _isdigit(int c);

/**
  * mul - this function multiplies two integers
  * @a: first integer to be multiplied
  * @b: second integer to be multiplied
  * Return: result
  */

int mul(int a, int b);

/**
  * print_numbers - print numbers from 0 to 9
  *
  * Return: nothing
  */

void print_numbers(void);

/**
  * print_most_numbers - print numbers from 0 to 9 except
  * '2' and '4'
  * Return: nothing
  */

void print_most_numbers(void);

/**
  * more_numbers - print numbers from 0 to 14 x10 times
  *
  * Return: nothing
  */

void more_numbers(void);

/**
  * print_line - is a function that draws a straight line
  * @n: is the number of "_" character to be printed
  */

void print_line(int n);

/**
  * print_diagonal - is a function that draws a diagonal line
  * on the terminal
  * @n: number of \ to be printed
  * Return: void
  */

void print_diagonal(int n);
#endif
