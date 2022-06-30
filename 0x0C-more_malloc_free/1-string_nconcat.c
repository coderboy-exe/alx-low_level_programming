#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - conncatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: On success, pointer to allocated memory, NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int a, b, len;
	unsigned int i = 0, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j > n)
		j = n;

	len = i + j;

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		ptr[k++] = s1[a];
	for (b = 0; b < j; b++)
		ptr[k++] = s2[b];

	ptr[k] = '\0';

	return (ptr);
}
