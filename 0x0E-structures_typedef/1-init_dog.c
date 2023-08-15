#include <stdlib.h>
#include "dog.h"

/**
*init_dog - struct intialization of dog.
*@name: member 1.
*@age: member 2.
*@owner: member 3.
*@d: pointer.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;


}
