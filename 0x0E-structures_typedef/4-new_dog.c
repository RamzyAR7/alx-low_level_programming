#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - returns the lenght of a string
 * @s: pointer to s
 * Return: 0 on success
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}
/**
 * _strcpy - copies the string with \0 to the buffer
 * @str2: pointer to dest
 * @str: pointer to string
 * Return: the pointer to dest
 */
char *_strcpy(char *str2, char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
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

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	new_dog->name = malloc((name_len + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog); /* Clean up if allocation fails */
		return (NULL);
	}
	_strcpy(new_dog->name, name); /* Copy name to new allocation */

	new_dog->age = age; /* Set age for new dog */

	owner_len = _strlen(owner);
	new_dog->owner = malloc((owner_len + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name); /* Clean up name if allocation fails */
		free(new_dog);		 /* Clean up struct if allocation fails */
		return (NULL);
	}
	_strcpy(new_dog->owner, owner); /* Copy owner to new allocation */

	return (new_dog); /* Return new dog struct */
}
