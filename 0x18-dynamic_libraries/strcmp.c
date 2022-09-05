#include "main.h"

/**
 * _strcmp- coompare string
 * @s1: first string
 * @s2: second string
 * Return: the number of differences between both strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (0);
}
