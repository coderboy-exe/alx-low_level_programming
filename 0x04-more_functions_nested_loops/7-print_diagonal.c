#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: no of times characte should be printed
 */
void print_diagonal(int n)
{
	int gap;
	int slash;

	if (n > 0)
	{
		slash = 1;
		while (slash <= n)
		{
			 for (gap = 1; gap < slash; gap++)
			 {
				 _putchar(' ');
			 }
			_putchar('\\');
			_putchar('\n');
			slash++;
		}
	}
	else
	{
		_putchar('\n');
	}

}
