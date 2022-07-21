#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars.
 *
 * Return: the converted number or 0 if b = NULL or ther are
 * characters other than 0 and 1 in the string
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[len] != '\0')
		len++;
	len -= 1;

	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (num);

	/* compute squares with binary (e.g 1<<2 = 100 in binary) */
		if (b[i] == '1')
			num += (1 * (1 << len));
		i++;
		len--;
	}

	return (num);
}
