#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - freethr struct
 * @d: the struct var
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
