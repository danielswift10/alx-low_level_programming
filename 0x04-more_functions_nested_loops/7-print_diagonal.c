#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int dl_c, dl_s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (dl_c = 1; dl_c <= n; dl_c++)
		{
			for (dl_s = 1; dl_s < dl_c; dl_s++)
			{
				_puthcar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
