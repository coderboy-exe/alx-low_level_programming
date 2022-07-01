#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory block usinng malloc and free
 *
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size in bytes of allocated space for ptr
 * @new_size: size of type in bytes of the new memory block
 *
 * Return: On success, pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	char *spc = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		mem[i] = spc[i];
	free(spc);

	return (mem);
}
