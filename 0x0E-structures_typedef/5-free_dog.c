#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a structure dog
 * @d: points to dog
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
