#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 * Linear Search Algorithm
 *
 * @array: a pointer to the first element of the array (Sorted in asc order)
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: the first index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i;
	unsigned int beg, mid, end;

	if (!(value) || array == NULL)
		return (-1);

	i = 0;
	beg = 0;
	mid = 0;
	end = size - 1;
	while (beg <= end)
	{
		printf("Searching in array: ");
		for (i = beg; i <= end; i++)
		{
			if (i != end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (beg + end) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
		{
			end = mid - 1;
		}
		else
			beg = mid + 1;
	}
	return (-1);
}
