#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - frees dogs
  * @d: freed dog
  * Return: no return
  */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
