#include "main.h"
#define NULL 0

/**
 * _strspn - gets the length of a prefixsub string
 * @s: string argument
 * @accept: bytes to include
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	int match = 0;

	while (s[i] != '\0')
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					match++;
				}
			}
		}
		else
		{
			return (match);
		}

		i++;
	}

	return (match);

}
