#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @n: input string
 * Return: Always 0 (success)
 */

char *leet(char *n)
{
	int i, j;
	int str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int str_r[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (n[i] == str[j])
			{
				n[i] = str_r[j / 2];
				j = 9;
			}
		}
	}
	return (n);
}
