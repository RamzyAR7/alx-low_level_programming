#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t)); /* Allocate memory for new dog */
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name);							   /* Calculate length of name */
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog); /* Clean up if allocation fails */
		return (NULL);
	}
	strcpy(new_dog->name, name); /* Copy name to new allocation */

	new_dog->age = age; /* Set age for new dog */

	owner_len = strlen(owner);								 /* Calculate length of owner */
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name); /* Clean up name if allocation fails */
		free(new_dog);		 /* Clean up struct if allocation fails */
		return (NULL);
	}
	strcpy(new_dog->owner, owner); /* Copy owner to new allocation */

	return (new_dog); /* Return new dog struct */
}
