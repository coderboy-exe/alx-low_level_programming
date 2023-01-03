#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear Search Algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!(value) || array == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
