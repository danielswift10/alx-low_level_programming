#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: input string
 * Return: the pointer to dest
 */

char *rot13(char *str)
{
	int i, j;

	i = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(str + i) == alphabet[j])
			{
				*(str + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
