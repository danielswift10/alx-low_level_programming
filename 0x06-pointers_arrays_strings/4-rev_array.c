#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array of integers to be reversed
 * @n: the number of elements in the array
 * Return: Always 0 (success)
 */

void reverse_array(int *a, int n)
{

	int i, j;

	for (i = 0; i < n; i++)
	{
		--n;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
