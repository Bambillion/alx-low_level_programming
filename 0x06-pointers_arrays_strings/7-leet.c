#include "main.h"

/**
  * leet - Encodes a string to 1337.
  * @str: The string to be encoded
  *
  * Return: A pointer to the encoded
  * string
  */

char *leet(char *str)
{
	int i = 0, j;
	char leet[] = "aAeEoOtTlL";
	char encode[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j]; j++)
		{
			if (leet[j] == str[i])
			{
				str[i] = encode[j];
				break;
			}
		}
	}
	return (str);
}
