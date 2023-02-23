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

#endif
