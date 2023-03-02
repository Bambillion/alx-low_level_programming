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
  * @n: byte size of 
  * Return: returns a pointer to dest
  */

char *_strncat(char *dest, char *src, int n);
#endif
