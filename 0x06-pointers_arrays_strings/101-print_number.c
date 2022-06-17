#include "main.h"

/**
 * print_number - print number
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int tens, unit, positive_value = n;
	double tens_value = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			positive_value = (n * -1);
			_putchar('-');
		}
		while (tens_value <= positive_value)
		{
			tens_value *= 10;
		}
		tens = tens_value / 10;

		while (tens >= 1)
		{
			unit = positive_value / tens;
			_putchar(unit + '0');
			positive_value = (positive_value - (tens * unit));
			tens /= 10;
		}
	}

}
