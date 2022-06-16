#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: negative difference, if s1 < s2
 * zero, if s1 == s2
 * and positive difference, if s1 > s2
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	for (i = 0; ((*(s1 + i) != '\0') && (*(s2 + i) != '\0')); i++)
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
	}
	return (0);
}
