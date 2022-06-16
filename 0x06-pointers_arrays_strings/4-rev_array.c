#include "main.h"

/**
 * reverse_array - reverse the order of an array
 * @a: array
 * @n: no of elememts in array
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1; /*omit null terminator*/
	int rev;

	while (start < end)
	{
		rev = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = rev;
		start++, end--;
	}
}
