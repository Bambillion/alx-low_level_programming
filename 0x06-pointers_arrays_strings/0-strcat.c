#include "main.h"

int _destlen(char *dest);


char *_strcat(char *dest, char *src);

/**
  * _destlen - a function to determine
  * the length of string
  * @dest: the destination string
  * Return: The length of the string
  */

int _destlen(char *dest)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	return (i);
}

/**
  * _strcat - a function that concatenates
  * two strings
  * @dest: destination string
  * @src: src string
  * Return: Destination string
  */

char *_strcat(char *dest, char *src)
{
	int dest_len = _destlen(dest);
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
		return (dest);

}
