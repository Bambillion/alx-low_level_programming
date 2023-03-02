#ifndef MAIN_H
#define MAIN_H

/**
  * _putchar - writes character c to stdout
  * @c: The character to print
  * Return: on success 1, on error -1
  */

int _putchar(char c);

/**
  * _destlen - length of destination string
  * @dest: destination array
  * Return: return length value
  */

int _destlen(char *dest);

/**
  * _strcat - concatenates two strings
  * @dest: destination array
  * @src: source string
  * Return: Return dest
  */

char *_strcat(char *dest, char *src);

/**
  * _strncat - concatenates two strings with a set
  * of bytes set
  * @dest: destination string
  * @src: source string
  * @n: byte size of size to be concatenated
  * Return: returns a pointer to dest
  */

char *_strncat(char *dest, char *src, int n);

/**
  * _strncpy - copies a string from destination
  * to source
  * @dest: destination array
  * @src: string array
  * @n: byte size of src to be copied
  * Return: returns pointer to dest
  */

char *_strncpy(char *dest, char *src, int n);

#endif
