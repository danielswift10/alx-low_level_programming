#include "main.h"

/**
 * _sqrt_num - a function that return for the square root of a number
 * @n: input number
 * @i: iterator
 * Return: square root of the number or -1 if it does not
 * have a natural square root
 */

int _sqrt_num(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + _sqrt_num(n, i + i));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: if n has a natural square root - the natural square root of n
 * should be returned
 * if n does not have a natural square root, -1 should be returned
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (_sqrt_num(n, 2));
}
