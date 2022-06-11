#include <stdio.h>

/**
 * main - print numbers 1 to 100
 * print mutiples of 3 as "Fizz"
 * print multiples of 5 as "Buzz"
 * print multiples of both 3 and 5 "FizzBuzz"
 * Return: 0 On success
 */

int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 ==0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n < 100)
		{
			printf(" ");
		}
		n++;
	}

	printf("\n");
	return (0);
}
