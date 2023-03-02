#include "main.h"
#include "0-strcat.c"

int _destlen(char *dest);

char *_strncat(char *dest, char *src, int n);

/**
  * _strncat - function that concatenates two
  * strings as per the value of bytes
  * @dest: destiantion string
  * @src: source string
  * @n: integer value
  * Return: return pointer of destination
  */

char *_strncat(char *dest, char *src, int n)
{

	int destlen = _destlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	return (dest);
}




