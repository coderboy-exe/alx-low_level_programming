#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments passed
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i, sum;

	va_start(arg_ptr, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(arg_ptr, unsigned int);

	va_end(arg_ptr);

	return (sum);
}
