#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b  > 0; b--)
				_putchar(' ');
			for (b = 0; b < a; b++)
				_putchar('#');
			if (a == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
