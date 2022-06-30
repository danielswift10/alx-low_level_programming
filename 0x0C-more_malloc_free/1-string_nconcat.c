#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings using at most
 * an inputted number of bytes
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concatenate to s1
 *
 * Return: If the function fails - NULL
 * Otherwise - a pointer to the concatenated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; ++i)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; ++j)
			;
	}
	if (j > n)
		j = n;
	concat = malloc(sizeof(char) * (i + j + 1));
	if (concat == NULL)
		return (NULL);
	for (k = 0; k < i; ++k)
		concat[k] = s1[k];
	for (k = 0; k < j; ++k)
		concat[k + i] = s2[k];
	concat[i + j] = '\0';
	return (concat);
}
