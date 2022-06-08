#include "main.h"

/**
 * jack_bauer - print every minute of jack bauer's day
 *
 * Desc: print all minutes from 00:00 to 23:00
 *
 * Return: none
 */

void jack_bauer(void)
{
	int hours = 0, mins;

	while (hours < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (mins / 10));
			_putchar('0' + (mins % 10));
			_putchar('\n');
			mins++;
		}
		hours++;
	}

}
