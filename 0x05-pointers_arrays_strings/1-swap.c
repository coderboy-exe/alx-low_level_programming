#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: first int to swap
 * @b: second int to swap
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
