#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: parameter
 *
 * Return: On success, pointer to allocated memory, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
