#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int val = n;

	if (n < 0)
	{
		_putchar('-');
		val = -val;
	}
	if ((val / 10) > 0)
		print_number(val / 10);

	_putchar((val % 10) + '0');
}
