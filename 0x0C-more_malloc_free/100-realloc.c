#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated
 * @old_size: the size in nytes of the allocated space for ptr
 * @new_size: the size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr
 * If new_size == 0 and ptr is not NULL - NULL
 * Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
