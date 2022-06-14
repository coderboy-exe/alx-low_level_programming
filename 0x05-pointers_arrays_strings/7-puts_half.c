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
 * puts_half - prints last half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	/*locate half-way point of str depending even or odd value of _strlen*/
	if (length % 2 == 0)
	{
		i = (length / 2);
	}
	else
	{
		i = (length / 2) + 1;
	}

	while (i < length)
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
