#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the 2 diagonals in a square matrix
 * @a: matrix arg
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int diagsum1 = 0;
	int diagsum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		diagsum1 += a[j];
	}

	for (i = 0; i <= size; i++)
	{
		j = (i * size) - i;
		diagsum2 += a[j];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
