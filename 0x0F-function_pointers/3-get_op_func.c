#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct operation
 * @s: the operator passed as an argument to the program
 * Return: pointer to correct op, NULL if s does not match
 * any of the expected operators
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
