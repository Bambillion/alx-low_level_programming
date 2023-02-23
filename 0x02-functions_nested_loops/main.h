#ifndef _MAIN_H
#define _MAIN_H

/**
  * _putchar - writes the character c to std
  *
  * @c: parameter input
  *
  * Return: 1 or 0
  */

int _putchar(char c);

/**
  * print_alphabet - writes the alphabet characters
  */

void print_alphabet(void);

/**
  * print_alphabet_x10 - prints the alphabet 10 times 
  * in lowercase
  */

void print_alphabet_x10(void);

/**
  *_islower - is a function that checks for lowercase
  * character
  *
  * Return: 1 if c is lowercase or O otherwise
  */

int _islower(int c);

/**
  * _isalpha - is a function that checks if a character
  * is an alphabet
  *
  * Return: 1 if it is lowercase or uppercase
  */

int _isalpha(int c);

/**
  * print_sign - is a function that prints the 
  * sign of a number
  *
  * Return: 0 if n which is the number is zero and 
  * return -1 if n is less than zero
  */

int print_sign(int n);

/**
  * _abs - is a function that gets the absolute value
  * of an integer
  *
  * Return: Always 0
  */

int _abs(int);

/**
  * print_last_digit - is a function that prints
  * the last digit
  *
  * Return : Always 0
  *
  */

int print_last_digit(int);

/**
  * jack_bauer - is a function that prints the time
  * from 00.00 - 23.59
  *
  * Return: Always 0
  */

void jack_bauer(void);

/**
  * times_table - is a function that prints the 9 times 
  * table starting with 0
  *
  */

void times_table(void);

/**
  * int add - is a function that 
  * add two integers
  * 
  * @int: integers to add
  * Return: sum
  */

int add(int, int);



#endif
