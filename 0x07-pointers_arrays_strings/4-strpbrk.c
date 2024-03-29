#include "main.h"

/**
  * _strpbrk - searches a string for a set of characters
  * @s: The string to be searched.
  * @accept: The set of characters to be searched for
  * Return: if characters is matched return a pointer to the matched characters
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
