#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: matrix of integers
 * @size: size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, sum_1, sum_2;

	i = 0, sum_1 = 0, sum_2 = 0;
	while (i < (size * size))
	{
		if (i % (size + 1) == 0)
			sum_1 += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum_2 += *(a + i);
		++i;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
