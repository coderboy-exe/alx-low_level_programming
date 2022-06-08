#include <stdio.h>

/**
 * main - print sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 0, sum;

	while (num < 1024)
	{
		sum = 0;

		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
		num++;
	}

	printf("%d\n", num);

	return (0);
}
