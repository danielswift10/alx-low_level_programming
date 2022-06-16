#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: pointer to the string
 * @src: source string
 * @n: the maximum number of bytes to be copied from src
 *
 * Return: A pointer to the resulting string dest/
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, k;

	i = 0;
	k = 0;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = k; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
