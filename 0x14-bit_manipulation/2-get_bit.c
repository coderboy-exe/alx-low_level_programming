#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: integer argument
 * @index: index of the bit, starting from 0
 *
 * Return: value of the bit (0 or 1), -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	unsigned int max_bit;

	max_bit = (sizeof(unsigned long int) * 8);

	if (index > max_bit)
		return (-1);

	i = ((n >> index) & 1);

	return (i);
}
