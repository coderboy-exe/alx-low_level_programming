#include "main.h"

/**
 * _strlen - returns the length of a string
 * rev_string - reverse a string
 * @s: string to reverse
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

/*reverse the string*/
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