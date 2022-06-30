#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates ann array of integers
 *
 * @min: smallest value in the array
 * @max: largest value in the array
 *
 * Return: On success, pointer to allocated memory, NULL if
 * min > max || if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr, i;
	int j = 0;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	arr = malloc(n * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}
