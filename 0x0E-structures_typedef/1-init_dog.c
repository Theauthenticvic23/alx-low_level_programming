#include "dog.h"
#include <stdio.h>

/**
 * init_dog - dog
 * @d: to dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of dog
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
