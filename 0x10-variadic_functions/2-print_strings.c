#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints numbers, followd by a new line
 * @separator: the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;
	char *str;

	va_start(arg_ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_ptr, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(arg_ptr);
}
