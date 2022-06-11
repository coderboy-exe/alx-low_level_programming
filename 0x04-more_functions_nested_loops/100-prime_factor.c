#include <stdio.h>

/** 
 * main - print the largest prime factor of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long factor = 2;

	while (factor < num)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor = 2;
		}
		else 
		{
			factor++;
		}
	}
	printf("%lu\n", num);
	return (0);
}
