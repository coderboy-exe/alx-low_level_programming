#include "main.h"
#define NULL 0

/**
 * _strstr - locates a sub string
 * @haystack: string argument to be searched
 * @needle: string argument to search for
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int sub = 0;

	while (needle[sub] != '\0')
	{
		sub++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}

		if (i != sub)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}

	return (NULL);

}
