#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly-allocated space
 * in memory containing a copy of the string given as parameter
 * @str: the string to be copied
 * Return: If str == NULL or insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
		;
	strout = (char *)malloc(sizeof(char) * (i + 1));
	if (strout == NULL)
		return (NULL);
	for (j = 0; j <= i; ++j)
		strout[j] = str[j];
	return (strout);
}
