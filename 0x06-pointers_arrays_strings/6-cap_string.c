#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: string to be capitalized
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	int k = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - k;
		}
		k = 0;
		for (j = 0; j <= 12; j++)
		{
			if (str[i] == separators[j])
			{
				j = 12;
				k = 32;
			}
		}
	}
	return (str);
}
