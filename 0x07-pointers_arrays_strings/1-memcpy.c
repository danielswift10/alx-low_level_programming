#include "main.h"

/**
 * _memcpy - a function that copies n bytes from memory
 * area src to memory area dest
 * @dest: destination memory
 * @src: source memory area
 * @n: bytes to be filled
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		++i;
	}
	return (dest);
}
