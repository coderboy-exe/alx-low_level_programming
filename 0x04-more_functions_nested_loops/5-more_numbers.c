#include "main.h"

/**
 * more_numbers - print numbers from 0 to 9 except 2 and 4
 */
void more_numbers(void)
{
	int row = 0;
	char c;

	while (row <= 9)
	{
		c = 0;
		while (c <= 14)
		{
			if (c / 10 > 0)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
			c++;
		}
		_putchar('\n');
		row++;
	}

}
