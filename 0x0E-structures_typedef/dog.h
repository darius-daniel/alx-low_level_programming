#ifndef _DOG_
#define _DOG_

/**
  * struct dog - defines a struct tyoe about a dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's ownere
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif