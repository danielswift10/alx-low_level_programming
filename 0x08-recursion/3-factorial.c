#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number
 * @n: number whose factorial is to be found
 * Return: -1 if n < 0, and the factorial of n if n > 0
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
