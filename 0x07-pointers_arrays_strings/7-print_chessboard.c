#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: number of rows of the chessboard (a 2-D array)
 * Return: s
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		i++;

		_putchar('\n');
	}
}
