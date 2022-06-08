#include <stdio.h>

/**
 * main - print first 98 fib
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long a = 1, b = 2;
	long sum = a + b;

	printf("%ld, %ld, ", a, b);

	for (i = 3; i <= 98; ++i)
	{
		printf("%ld, ", sum);
		a = b;
		b = sum;
		sum = a + b;
	}
	return (0);
}
