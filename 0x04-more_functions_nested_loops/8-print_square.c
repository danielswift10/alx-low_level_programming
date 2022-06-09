#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	int sq_h, sq_w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sq_h = 1; sq_h <= size; sq_h++)
		{
			_putchar('#');
			for (sq_w = 2; sq_w <= size; sq_w++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
