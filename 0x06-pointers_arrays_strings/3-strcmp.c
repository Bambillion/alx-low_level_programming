#include "main.h"

/**
  * _strcmp - a function that compares
  * two strings
  * @s1: first string
  * @s2: second string
  * Return: Integer greater than, less than or equal
  * to zero
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
