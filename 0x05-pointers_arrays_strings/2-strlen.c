#include "main.h"

/**
  * _strlen - count the length of a string
  * @s: string
  * Return: the value of length of string
  */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
