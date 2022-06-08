#include <stdio.h>

/**
 * main - print first 50 fib
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, num = 50, count = 0;

	printf("%d, ", a);
	printf("%d, ", b);
	count = 2;

	while (count < num)
	{
		c = a + b;
		count++;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	return (0);
}
