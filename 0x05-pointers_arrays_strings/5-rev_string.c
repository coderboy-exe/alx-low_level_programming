#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string argument
 * Return: string length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char rev;

	while (i < j)
	{
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		i++, j--;
	}
}
