#include "main.h"

/**
 * _memset - a function that fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * @s: memory area
 * @b: constant byte
 * @n: byte to be filled
 * Return: a pointer to the memeory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		++i;
	}
	return (s);
}
