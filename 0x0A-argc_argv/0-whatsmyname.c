#include <stdio.h>

/**
 * main - prints the name of the file executing the function
 *
 * @argc: number of arguments
 * @argv: 1-D array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
