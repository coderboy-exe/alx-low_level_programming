#include <stdio.h>

/**
 * main - prints all the arguments it receives
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
		int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
