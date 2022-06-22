#include "main.h"

/**
 * is_prime - a function that checks if an input integer is a prime number
 * @n: input integer to be checked
 * @i: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (is_prime(n, i + 1));
}

/**
 * is_prime_number - a function that checks if a number is prime
 * @n: input integer to be checked
 * Return: 1 - if the input integer is a prime number
 * and 0 if the input integer is not a prime number
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
