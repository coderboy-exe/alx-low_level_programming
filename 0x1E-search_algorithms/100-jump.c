#include "search_algos.h"

/**
 * print_range - helper func to print at each check
 * @prev: index before jump
 * @idx: index after jump
 */
void print_range(int prev, int idx)
{
	printf("Value found between indexes [%d] and [%d]\n", prev, idx);
}

/**
 * print_idx - helper function to print the index checked
 * @array: array
 * @idx: index checked
 */
void print_idx(int *array, int idx)
{
	printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
}

/**
 * jump_search - Searches for a value in an array of integers
 * using the Jump search algorithm
 *
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: the first index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int m, k;
	int idx = 0;
	int prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = idx = 0;

	do {
		print_idx(array, idx);

		if (array[idx] == value)
			return (idx);
		k++;
		prev = idx;
		idx = k * m;
	} while (idx < (int)size && array[idx] < value);

	print_range(prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		/*print_idx(prev, array[prev]);*/
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
