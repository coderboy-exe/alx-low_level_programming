#include "main.h"

/**
 * print_square - print square
 * size: no of times characte should be printed
 */
void print_square(int size)
{
	int rows;
	int cols;

	if (size > 0)
	{
		rows = 0;
		while (rows < size)
		{
			 for (cols = 0; cols < size; cols++)
			 {
				 _putchar('#');
			 }
			_putchar('\n');
			rows++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
