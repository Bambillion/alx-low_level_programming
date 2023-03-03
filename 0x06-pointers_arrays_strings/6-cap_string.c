#include "main.h"

/**
  * _indexof - seperators of words
  * @a: an input character
  * Return: 1 if seperator, 0 otherwise
  */

int _indexof(char a)
{
	int i = 0;
	char _index[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (a == _index[i])
			return (1);
	}
	return (0);
}

/**
  * cap_string - capitalizes the string
  * @s: string to be capitalized
  * Return: the string capitalized
  */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (_indexof(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}
