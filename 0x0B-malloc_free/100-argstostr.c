#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments to the program
 *
 * @ac: number of arguments
 * @av: arguments to concatenate
 *
 * Return: On success, pointer to the string, on failure, NULL
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int a, b, i, j, k, count = 0;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++) /* validate number of args */
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			count++;
		}
		count++;
	}
	count++;

	concat = malloc(count * sizeof(char));
	if (concat == NULL)
		return (NULL);

	i = 0, k = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
		concat[k] = '\n';
		k++, i++;
	}

	concat[k] = '\0'; /* add ull character to end of string */
	return (concat);
}
