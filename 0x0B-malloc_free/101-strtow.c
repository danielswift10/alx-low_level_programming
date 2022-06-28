#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: the 2-dimensional array of integers to be freed
 * @height: the height of the grid
 * Return: void
 */

void ch_free_grid(char **grid, unsigned int height)
{
	int i;

	for (i = 0; i < height; ++i)
		free(grid[i]);
	free(grid);
}

/**
 * strtow - a function that splits a string into words
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **strings;
	unsigned int c, height, i, j, s1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; ++c)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	strings = malloc((height + 1) * sizeof(char *));
	if (strings == NULL || height == 0)
	{
		free(strings);
		return (NULL);
	}
	for (i = s1 = 0; i < height; ++i)
	{
		for (c = s1; str[c] != '\0'; ++c)
		{
			if (str[c] == ' ')
				++s1;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				strings[i] = malloc((c - s1 + 2) * sizeof(char));
				if (strings[i] == NULL)
				{
					ch_free_grid(strings, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; s1 <= c; ++s1, ++j)
			strings[i][j] = str[s1];
		strings[i][j] = '\0';
	}
	strings[i] = NULL;
	return (strings);
}
