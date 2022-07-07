#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * get_char - prints chars
 * @arg_ptr: the args pointer
 */
void get_char(va_list arg_ptr)
{
	printf("%c", va_arg(arg_ptr, int));
}

/**
 * get_int - prints ints
 * @arg_ptr: args pointer
 */
void get_int(va_list arg_ptr)
{
	printf("%d", va_arg(arg_ptr, int));
}

/**
 * get_float - prints float
 * @arg_ptr: args pointer
 */
void get_float(va_list arg_ptr)
{
	printf("%f", va_arg(arg_ptr, double));
}

/**
 * get_string - prints strings
 * @arg_ptr: args pointer
 */
void get_string(va_list arg_ptr)
{
	char *str;

	str = va_arg(arg_ptr, char *);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments the function takes
 * Return: none
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i = 0, j;
	va_list arg_ptr;

	get_type type[] = {
		{"c", get_char},
		{"i", get_int},
		{"f", get_float},
		{"s", get_string},
		{NULL, NULL}
	};

	va_start(arg_ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (type[j].s)
		{
			if (*type[j].s == format[i])
			{
				printf("%s", separator);
				type[j].func(arg_ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
