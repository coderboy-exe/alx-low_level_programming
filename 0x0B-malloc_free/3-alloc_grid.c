#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 *
 * @width: grid width
 * @height: grid height
 *
 * Return: On success, a pointer to array, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *)); /* allocate rows memory */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int)); /* allocate columns memory */

		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++) /* initialize arr to 0 */
			arr[i][j] = 0;
	}

	return (arr);
}
