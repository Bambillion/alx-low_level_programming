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
  * @n: the pointer parameter
  * Return: void
  */

void reset_to_98(int *n);

/**
  * swap_int - swaps the values of
  * two integers
  * @a: first integer reference
  * @b: second integer reference
  */
void swap_int(int *a, int *b);

/**
  * _strlen - string length
  * @s: string
  * Return: return the value of string length
  */

int _strlen(char *s);

/**
  * _puts - print out to stdout
  * @str: string literal
  */

void _puts(char *str);

/**
  * print_rev - function that reverses a string
  * @s: string to be reversed
  */

void print_rev(char *s);

/**
  * rev_string - function that reverses a string
  * @s: string to be reversed
  */

void rev_string(char *s);

/**
  * puts2 - function prints every other character of a string
  * @str: string literal
  */

void puts2(char *str);

/**
  * puts_half - prints half of a string
  * @str: string literal
  */

void puts_half(char *str);

/**
  * print_array - prints n elements of an arry
  *
  * @a: array pointer
  * @n: number of elements to be printed
  */

void print_array(int *a, int n);

/**
  * _strcpy - copy a string from a source to a destination
  * @dest: destination
  * @src: source
  * Return; The pointer to the destination
  */

char *_strcpy(char *dest, char *src);
#endif
