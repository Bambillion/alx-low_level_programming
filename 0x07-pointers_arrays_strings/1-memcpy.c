#include "main.h"

/**
  * _memcpy - function copies n bytes from src to
  * dest
  * @dest: memory destination to be copied to
  * @src: memory source to be copied from
  * @n: size of bytes of memory to be copied
  * Return: returns a pointer to dest.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = n;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
