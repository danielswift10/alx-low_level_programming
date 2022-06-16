#include "main.h"

/**
 * _strncat - a function that appends the src string to the dest string,
 * overwriting the terminating null byte \0 at the end of dest
 * and then adds a terminating null byte
 * @dest: pointer destination
 * @src: the string to be append to dest
 * @n: number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	for (; dest[i++]; j++)
		;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];

	return (dest);
}
