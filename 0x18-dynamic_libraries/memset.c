#include "main.h"

/**
 * _memset - fill the first 'n' bytes of the memory area pointed to by 's'
 * with the constant byte 'b'
 * @n: number of bytes arg
 * @s: pointer to memory area
 * @b: replacement const byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		int i;

		for (i = 0; i < bytes; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
