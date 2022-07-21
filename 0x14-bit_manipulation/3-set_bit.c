#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer argument
 * @index: index of the bit, starting from 0
 *
 * Return: value of the bit (1), -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, max_bit;

	max_bit = (sizeof(unsigned long int) * 8);

	if (index > max_bit)
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
