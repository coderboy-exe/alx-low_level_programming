#include <stdio.h>

/**
 * main - prints the number of arguments to a function
 *
 * @argc: number of arguments
 * @argv: 1-D array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc >= 1)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
