#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string in which we are to find its length
 * Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}
