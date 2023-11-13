#include"dog.h"
#include<stdlib.h>

/**
 * free_dog -entry point,frees the dogs
 * @d: -points to the respective memory
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
