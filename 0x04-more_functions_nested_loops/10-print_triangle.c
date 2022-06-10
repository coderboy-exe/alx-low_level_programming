#include "main.h"

/**
 * print_triangle - print triangle
 * @n: no of times characte should be printed
 */
void print_triangle(int size)
{
	int rows;
	int cols;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
	}
	{
		rows = 1;
		while (rows <= size)
		{
			 for (cols = 1; cols <= (size - rows); cols++)
			 {
				 _putchar(' ');
			 }
			for (hash = 1; hash <= rows; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
			rows++;
		}
	}

}
