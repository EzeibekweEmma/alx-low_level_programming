#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type 'struct dog'
 * @d: structure of the dog
 * @name: string for the dog name
 * @age: float for the dog age
 * @owner: string for the dog owner
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
