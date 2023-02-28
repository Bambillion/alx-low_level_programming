#include "main.h"
#include "2-strlen.c"

/**
  * *_strcpy - copies string from src to dest
  * @dest: char type string
  * @src: char type string
  * Description: copies the string pointed to by 'src'
  * to the buffer point at `dest`
  * Return: Dest pointer
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
