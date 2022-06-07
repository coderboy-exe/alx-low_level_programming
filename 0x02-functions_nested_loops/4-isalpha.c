#include "main.h"

/**
 * _isalpha - checks if c is a letter
 *
 * @c: char to be checked
 *
 * Return: 1 if lowercase or uppercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	_putchar('\n');
}
