#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: first int to swap
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
 * _strcpy - copies the string pointed to by 'src', including the
 * terminating nnull byte(\0), to the buffer pointed to by 'dest'
 * @src: pointer to string to be copied
 * @dest: pointer to buffer to be copied to
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i <= _strlen(src))
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
