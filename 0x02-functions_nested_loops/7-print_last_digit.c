#include "main.h"

/**
 * print_last_digit - print last digit of an integer
 *
 * @n: num to be checked
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
