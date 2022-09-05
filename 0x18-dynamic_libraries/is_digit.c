#include "main.h"

/**
 * _isdigit - checks for char between 0 and 9
 *
 * @c: input argument
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
