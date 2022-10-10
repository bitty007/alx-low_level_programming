#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - fress dogs.
 * @d: struct dogs.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
