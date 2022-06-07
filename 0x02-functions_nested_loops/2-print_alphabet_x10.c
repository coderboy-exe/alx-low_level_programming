#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alpha followed by a new line
 *
 * Return: Always 0 (Success
 */

void print_alphabet_x10(void)
{
	char times = 0, alpha;

	while (times < 10)
	{
		alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}

		_putchar('\n');
		times++;
	}
}
