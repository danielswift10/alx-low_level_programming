#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	int line_count;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line_count = 0; line_count <= n; line_count++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
