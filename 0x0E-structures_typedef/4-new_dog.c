#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, x, y, z;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	while (name[i])
	{
		i++;
	}

	new_dog->name = malloc((i + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		new_dog->name[x] = name[x];
	}
	new_dog->age = age;
	while (owner[y])
	{
		y++;
	}
	new_dog->owner = malloc((y + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (z = 0; z < y; z++)
	{
		new_dog->owner[z] = owner[z];
	}
	return (new_dog);
}
