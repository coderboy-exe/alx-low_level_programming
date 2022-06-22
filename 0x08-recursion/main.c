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



	        n = _pow_recursion(1024, 0);

		    printf("%d\n", n);

	        n = _pow_recursion(5, -2);
		    printf("%d\n", n);
	        n = _pow_recursion(5, 2);
		    printf("%d\n", n);
	        n = _pow_recursion(-5, 3);
		    printf("%d\n", n);
	        n = _pow_recursion(1, 10);
		    printf("%d\n", n);


		        return (0);

}
