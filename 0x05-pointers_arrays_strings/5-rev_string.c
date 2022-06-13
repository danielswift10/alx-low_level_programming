#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string character to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[++j]; ++i)
		for (j = i - 1; j >= 0; --j)
			_putchar(s[j]);
	_putchar('\n');
}