#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * pwd - generagte a random password
 */

void pwd(int N)
{
	int i = 0;

	int randomizer = 0;

	srand((unsigned int) (time (NULL)));

	char numbers[] = "0123456789";
	char letters[] = "abcdefghijklmnopqrstuvwxyz";

	char password[N];

	randomizer = rand() % 2;

	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 2;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letters[rand() % 26];
			randomizer = rand() % 2;
			printf("%c", password[i]);
		}
	}
}

int main()
{
	int N = 7;

	pwd(N);

	return (0);
}
