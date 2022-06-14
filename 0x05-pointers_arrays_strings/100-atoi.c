#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: first int to swap
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * first_num_id - get id of the first digit
 * @s: string argument
 * Return: index of first digit
 */

int first_num_id(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* if no digits are found */
}

/**
 * _sign - determine if digit is negative
 * @s: integer
 * Return: 1 or -1
 */

int _sign(char *s)
{
	int negative = 0, i = 0, sign = 1;

	while (i < (first_num_id(s)))
	{
		if (s[i++] == '-')
			negative++;
	}

	if (negative % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi - convert string to int
 * @s: string argument
 * Return: integer
 */

int _atoi(char *s)
{
	int first_digit_id = (first_num_id(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (first_num_id(s));

	/* exit program if there are no digits */
	if (first_digit_id < 0)
		return (0);

	sign = _sign(s);

	/* get digits to print */
	while ((s[first_digit_id] >= '0' && s[first_digit_id] <= '9') &&
		(first_digit_id <= _strlen(s)))
	{
		digits_to_print += 1;
		first_digit_id++;
	}

	/* get powers to 10 to multiply by */
	i = 1;
	while (i < digits_to_print)
	{
		t *= 10;
		i++;
	}

	/* calculate the resulting number */
	for (i = digit; i < (digit + digits_to_print); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
