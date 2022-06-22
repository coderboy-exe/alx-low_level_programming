#include "main.h"

/**
 * check_sub_match - checks if the substring after * matches with s1
 *
 * @s1: base string
 * @s2: string being compared
 * @place: placeholder for index just after special char (*)
 *
 * Return: 1 if match, 0 otherwise
 */

int check_sub_match(char *s1, char *s2, char *place)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == '\0' && *s2 == '*')
	{
		return (check_sub_match(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == '\0' && *s2 != '\0')
	{
		return (0);
	}

	if (*s2 == '*')
	{
		return (check_sub_match(s1, s2 + 1, s2 + 1));
	}

	if (*s1 == *s2)
	{
		return (check_sub_match(s1 + 1, s2 + 1, place));
	}

	else
	{
		return (check_sub_match(s1 + 1, place, place));
	}

}


/**
 * wildcmp - compares 2 strings, one with special char '*'
 *
 * @s1: base string
 * @s2: string being compared
 *
 * Return: '1' if match, '0' otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	else if (*s2 == '*')
	{
		return (check_sub_match(s1, (s2 + 1), (s2 + 1)));
	}

	else
		return (0);
}
