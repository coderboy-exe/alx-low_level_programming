#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds;
	int tens;
	int units;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++)
		{
			for (units = (tens + 1); units <= '9'; units++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(units);

				if (hundreds != '7' || tens != '8' || units != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
