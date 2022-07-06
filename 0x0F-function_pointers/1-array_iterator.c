#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: array argument
 * @size: size of array
 * @action: a pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size)
		for (i = 0; i < size; i++)
			action(array[i]);
}
