#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array of a certain number
 * of elements each of an inputted byte size.
 * @nmemb: the number of elements
 * @size: the byte size of each array element
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); ++i)
		arr[i] = 0;
	return (arr);
}
