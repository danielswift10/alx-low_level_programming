#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: string character to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char k;

	i = 0;
	j = 0;

	while (s[++j])
		++i;
	for (j = i - 1; j >= i / 2; --j)
	{
		k = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = k;
	}
}
