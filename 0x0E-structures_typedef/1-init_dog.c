#include <stdio.h>
#include "dog.h"

/**
*init_dog - struct intialization of dog.
*@name: member 1.
*@age: member 2.
*@owner: member 3.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age ;
	d->owner = owner;


}
