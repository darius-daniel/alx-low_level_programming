#ifndef _DOG_
#define _DOG_

/**
  * struct dog - defines a struct tyoe about a dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's ownere
  */

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
