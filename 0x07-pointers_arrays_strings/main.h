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
  * simple_print_buffer - prints buffer in hexa
  * @buffer: the address of memory to print
  * @size: the size of the memory to print
  *
  * Return: Nothing.
*/

void simple_print_buffer(char *buffer, unsigned int size);

/**
 * _memset - write n bytes of char b to pointer s
 * @s: memory area to be filled
 * @b: hexa code to write memory
 * @n : size of memory area to be filled
 * Return: returns pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n);

/**
  * _memcpy - copies n bytes of src to dest
  * @dest: destination of memory where n is copied to
  * @src: memory source from where n bytes is copied from
  * @n: size of memory to be copied
  */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
  * _strchr - function that locates a character in a string
  * @s: string to be searched
  * @c: character to be located
  * Return: returns a pointer to first occurence of c
  */

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a) [8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);


#endif
