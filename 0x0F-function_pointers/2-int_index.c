#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array argument
 * @size: size of array
 * @cmp: a pointer to the function to be used to compare values
 */

int int_index(int *array, size_t size, void (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
		{
			return (i);
		}
		else
	return (-1);
}
