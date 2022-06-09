#include "main.h"

/**
 * _isupper - checks for uppercase char
 *
 * @c: input argument
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
