#include <stdio.h>

/**
 * main - print first 50 fib
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int a = 1, b = 2;
	int sum = a + b;

	printf("%d, %d, ", a, b);

	for (i = 3; i <= 50; ++i)
	{
		printf("%d, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	return (0);
}
