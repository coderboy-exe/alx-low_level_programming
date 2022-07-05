#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duuplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *cpy;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;

	cpy = malloc((i + 1) * sizeof(char));

	if (cpy == NULL)
		return (NULL);

	while (str[j])
	{
		cpy[j] = str[j];
		j++;
	}

	cpy[j] = 0;
	return (cpy);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new dog, NULL f function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *shiny_dog;
	char *name_cpy;
	char *owner_cpy;

	shiny_dog = malloc(sizeof(dog_t));
	if (shiny_dog == NULL)
		return (NULL);

	name_cpy = _strdup(name);
	if (!name_cpy && name)
	{
		free(shiny_dog);
		return (NULL);
	}

	owner_cpy = _strdup(owner);
	if (!owner_cpy && owner)
	{
		free(name_cpy);
		free(shiny_dog);
		return (NULL);
	}

	shiny_dog->name = name_cpy;
	shiny_dog->age = age;
	shiny_dog->owner = owner_cpy;

	return (shiny_dog);
}
