#include "main.h"

/**
 * print_rev - print the reverse of a string
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	/*find last character*/
	while (*s != '\0')
	{
		length++;
		++s;
	}

	/*go to char before null char*/
	s--;

	/*print reversed string*/
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
