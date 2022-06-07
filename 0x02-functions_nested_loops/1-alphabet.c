#include "main.h"

/**
 * main - print lowercase alpha followed by a new line
 *
 * Return: Always 0 (Success
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');

	return;
}
