#include "main.h"

/**
 * reverse_array - reverse the order of an array
 * @a: array
 * @n: no of elememts in array
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}
