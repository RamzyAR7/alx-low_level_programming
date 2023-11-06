#include "dog.h"
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type
 * @d: sturct of dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
