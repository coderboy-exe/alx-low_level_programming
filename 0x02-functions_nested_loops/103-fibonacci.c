#include <stdio.h>

/**
 * main - print sum of evens of fib up to 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int evens_sum = 0;
	int a, b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		a = b;
		b = sum;
		sum = a + b;
		if ((sum <= 4000000) && (sum % 2 == 0))
		{
			evens_sum += sum;
		}
	}
	printf("%d\n", evens_sum);
	return (0);
}
