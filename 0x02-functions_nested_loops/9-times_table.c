#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 *  r = row, c = column, digit = digits of current result
 *  Return: times table
 */

void times_table(void)
{
	int r, c, digit;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			digit = (r * c);
			if ((digit / 10) > 0)
			{
				_putchar((digit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((digit % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
