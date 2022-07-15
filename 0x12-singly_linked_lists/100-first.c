#include <stdio.h>

/**
 * pre_main - function to execute before main
 * Return: none (void)
 */

void __attribute__ ((constructor)) pre_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
