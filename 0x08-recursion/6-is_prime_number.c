#include "main.h"

/**
  * _prime - check if number is prime
  * @n: number to be checked
  * @div: guesses
  * Return: 1 if prime number otherwise 0.
  */

int _prime(int n, int div)
{
	if (n % div == 0)
	{
		if (n == div)
			return (1);
		else
			return (0);
	}
	return (_prime(n, div + 1));
}

/**
  * is_prime_number - function to check  prime number or not
  * @n: number to be checked
  * Return:1 if prime number otherwise 0
  */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
