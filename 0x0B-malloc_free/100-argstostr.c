#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all arguments of the program
 * into a string; where arguments are separated by a new line
 * in the string.
 * @ac: The number of arguments passed to the program
 * @av: An array of pointers to the arguments.
 * Return: If ac == 0, av == NULL, or the function fails - NULL
 * Otherwise - a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			++len;
	}
	len += ac;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
		{
			str[k] = av[i][j];
			++k;
		}
		if (str[k] == '\0')
		{
			str[++k] = '\n';
		}
	}
	return (str);
}
