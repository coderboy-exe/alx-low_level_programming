#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer argument
 * @index: index of the bit, starting from 0
 *
 * Return: value of the bit (1), -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1, max_bit;

	max_bit = (sizeof(unsigned long int) * 8);

	if (index > max_bit)
		return (-1);

	i = 1 << index;

	if (*n & i)
		*n ^= i;

	return (1);
}
