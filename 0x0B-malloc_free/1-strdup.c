#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated soace in memory, which
 * contains a copy of the string given as a parameter
 *
 * @str: string parameter
 *
 * Return: On success, a pointer to duplicated string, NULL if
 * insufficient memory
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *dup_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++, j++;
	}
	i++; /*add null terminator*/

	dup_str = malloc(i * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}


	j = 0;

	while (j < i)
	{
		dup_str[j] = str[j];
		j++;
	}

	return (dup_str);
}
