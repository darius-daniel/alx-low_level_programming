#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints a dog struct
  * @d: the dog to be printed
  * Return: no return
  */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else if (d->name)
			printf("Name: %s\n", d->name);

		if (!(d->age))
			printf("Age: (nil)\n");
		else if (d->name)
			printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else if (d->owner)
			printf("Owner: %s\n", d->owner);
	}
	else
		putchar('\0');
}
