#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: information about new dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int i, nameLen, ownerLen;

	new = malloc(sizeof(new));
	if (!(new) || !(name) || !(owner))
	{
		free(new);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
		;
	nameLen = i + 1;

	new->name = malloc(nameLen);

	for (i = 0; owner[i] != '\0'; i++)
		;
	ownerLen = i + 1;

	new->owner = malloc(ownerLen);
	if (!(new->owner && new->name))
	{
		free(new->owner);
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; i < nameLen - 1; i++)
		new->name[i] = name[i];
	new->name[i] = '\0';

	for (i = 0; i < ownerLen - 1; i++)
		new->owner[i] = owner[i];
	new->owner[i] = '\0';

	new->age = age;

	return (age);
}
