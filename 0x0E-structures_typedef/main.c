#include <stdio.h>

#include "dog.h"



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

	    dog_t *my_dog;

		my_dog = new_dog("Pooppy", 3.5, "Bob");

			    printf("%s, %.1f, %s\n", my_dog->name, my_dog->age, my_dog-> owner);

			        return (0);

}
