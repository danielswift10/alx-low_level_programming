#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2-dimensional array of
 * integers with each element initialized to 0.
 * @width: the width of the 2-dimensional array
 * @height: the height of the 2-dimensional array
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **two_dim;
	int index_h, index_w;

	if (width <= 0 || height <= 0)
		return (NULL);
	two_dim = malloc(sizeof(int *) * height);
	if (two_dim == NULL)
		return (NULL);
	for (index_h = 0; index_h < height; index_h++)
	{
		two_dim[index_h] = malloc(sizeof(int) * width);
		if (two_dim[index_h] == NULL)
		{
			for (;  index_h >= 0; index_h--)
				free(two_dim[index_h]);
			free(two_dim);
			return (NULL);
		}
	}
	for (index_h = 0; index_h < height; index_h++)
	{
		for (index_w = 0; index_w < width; index_w++)
			two_dim[index_h][index_w] = 0;
	}
	return (two_dim);
}
