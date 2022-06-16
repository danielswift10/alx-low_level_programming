#include "main.h"

/**
 * _strcat - a function that appends the src string to the dest string,
 * overwriting the terminating null byte \0 at the end of the dest, and
 * then adds a terminating null byte
 * @dest: pointer destination
 * @src: source string to be appendded to @dest
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	for (; dest[i++]; j++)
		;
	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
