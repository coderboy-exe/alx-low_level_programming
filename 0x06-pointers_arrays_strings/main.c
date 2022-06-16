#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * 
 * Return: Always 0
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	printf("-----------------------------\n");
	printf("%s", s);
	printf("-----------------------------\n");
	p = rot13(s);
	printf("%s", p);
	printf("-----------------------------\n");
	printf("%s", s);
	return (0);
}
