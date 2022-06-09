#include "main.h"

/**
 * print_line - print line
 * @n: no of times characte should be printed
 */
void print_line(int n)
{
	char times = n;

	while (times > 0)
	{
		_putchar('_');
		times--;
	}
	_putchar('\n');

}
