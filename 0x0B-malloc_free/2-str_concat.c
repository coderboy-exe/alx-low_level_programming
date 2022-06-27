#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string parameter
 * @s2: second string parameter
 *
 * Return: On success, concatenated string, on failure, NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		len1++, i++;

	while (s2[j])
		len2++, j++;

	len2++; /*add null terminator*/

	s3 = malloc((len1 + len2) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	i = 0, j = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		s3[i] = s2[j];
		i++, j++;
	}

	return (s3);
}
