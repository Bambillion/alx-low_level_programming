#include "main.h"

/**
  * _strspn - gets lenght of the prefix substring
  * @s: String
  * @accept: The prefix to be measured
  * Return: the number of bytes in string
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
