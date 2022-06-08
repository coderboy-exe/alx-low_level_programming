#include "main.h"

/**
 * print_times_table - print times table of n
 *
 * @n: integer argument
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row = 0, column;
		int product;

		while (row <= n)
		{
			column = 0;

			while (column <= n)
			{
				product = row * column;

				if (column == 0)
				{
					_putchar('0' + product);
				}
				else if (product <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}

				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
