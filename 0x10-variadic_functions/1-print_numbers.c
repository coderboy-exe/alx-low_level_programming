#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followd by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_ptr, unsigned int));

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(arg_ptr);
}
