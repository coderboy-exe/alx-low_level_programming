#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: number of bytes arg
 * @src: source
 * @dest: destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int bytes = n;

	if (bytes > 0)
	{
		int i;

		for (i = 0; i < bytes; i++)
		{
			dest[i] = src[i];
		}
	}

	return (dest);
}
