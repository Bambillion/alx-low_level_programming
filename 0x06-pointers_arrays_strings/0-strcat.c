#include "main.h"

int _destlen(char *dest);
char *_strcat(char *dest, char *src);

int _destlen(char *dest)
{ 
	int i;
	
	for (i = 0; dest[i] != '\0'; i++)
		;
	return i;
}


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
