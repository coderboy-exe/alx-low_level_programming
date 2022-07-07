#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct get_type - struct definition
 * @s: character type
 * @func: funtion to carry out operation
 */
typedef struct types
{
	char *s;
	void (*func)(va_list arg_ptr);
} get_type;

#endif
