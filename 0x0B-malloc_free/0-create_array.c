#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: size of the arraay
 * @c: char to initialize with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}


	i = 0;

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);
}
