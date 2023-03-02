#include "main.h"

/**
  * _strncpy - copies a string from src to
  * dest
  * @dest: destination to copy
  * @src: source to copy
  * @n: byte value to copy from src to dest
  * Return: return a pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
