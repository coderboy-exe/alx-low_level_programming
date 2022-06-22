#include "main.h"

#include <stdio.h>



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    int n;



	        n = is_prime_number(5);

		    printf("%d\n", n);

	        n = is_prime_number(25);
		    printf("%d\n", n);
	        n = is_prime_number(16);
		    printf("%d\n", n);
	        n = is_prime_number(17);
		    printf("%d\n", n);
	        n = is_prime_number(-1);
		    printf("%d\n", n);


		        return (0);

}
