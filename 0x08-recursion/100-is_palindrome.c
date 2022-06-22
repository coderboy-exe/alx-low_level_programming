#include "main.h"

/**
 * check_pal - checks if the left and right sides of the string match
 *
 * @left: left index
 * @right: right index
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *left, char *right)
{
	if (left >= right)
	{
		return (1);
	}

	if (*left == *right)
	{
		return (check_pal(left + 1, right - 1));
	}

	return (0);
}


/**
 * _strlen - get string length to know index of last character
 *
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + (_strlen(s + 1)));
}

/**
 * is_palindrome - check if string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int strlen = _strlen(s);

	return (check_pal(s, (s + strlen - 1)));
}
