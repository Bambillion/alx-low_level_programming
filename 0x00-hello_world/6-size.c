#include <stdio.h>
/**
  * main - Main Entry
  * Description: print size of a
  * datatype
  * Return: 0
  */

int main(void)
{
	int i;
	char c;
	long int l;
	long long int n;

	printf("Size of a char: %lu  byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(l));
	printf("Size 
of a long long int: %lu byte(s)\n",(unsigned long)sizeof(n));
	printf("Size of a float: %zu byte(s)\n",sizeof(float));
}

