#include "main.h"

/**
 * more_numbers- a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int num, num_c;

	for (num_c = 0; num_c <= 9; num_c++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
