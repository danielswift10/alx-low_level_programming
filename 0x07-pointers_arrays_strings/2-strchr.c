#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurence of c if c is found
 * and NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		++i;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
