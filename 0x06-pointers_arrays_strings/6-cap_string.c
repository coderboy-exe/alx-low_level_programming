#include "main.h"

/**
 * cap_string - Capitalize first letter of a string
 * @s: string argument
 * Return: the uppercase string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 'a' + 'A';
	}
	i++;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i - 1] == ' '
			|| s[i - 1] == '\t' || s[i - 1] == '\n'
			|| s[i - 1] == ',' || s[i - 1] == ';'
			|| s[i - 1] == '.' || s[i - 1] == '!'
			|| s[i - 1] == '?' || s[i - 1] == '"'
			|| s[i - 1] == '(' || s[i - 1] == ')'
			|| s[i - 1] == '{' || s[i - 1] == '}'))
		{
			s[i] = s[i] - 'a' + 'A';
		}

		i++;
	}

	return (s);
}
