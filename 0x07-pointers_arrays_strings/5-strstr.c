#include "main.h"

/**
  * _strstr - checks presence of substring
  * @haystack: The searched string
  * @needle: The string to be checked
  * Return: if the substring is present, a pointer to
  * the beginning of the checked string, otherwise NULL
  * if string is not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}

