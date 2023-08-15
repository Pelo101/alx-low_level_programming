#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
*new_dog - creates new dog.
*@d: pointer.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newD;

	newD = malloc(sizeof(dog_t));

	if (newD == NULL)
	{
		return (NULL);
	}

	newD->name = (char *)malloc(strlen(name) + 1);
	newD->owner = (char *)malloc(strlen(owner) + 1);

	if(newD->name == NULL || newD->owner == NULL)
	{
		free(newD->name);
		free(newD->owner);
		free(newD);
		return (NULL);
	}

	strcpy(newD->name, name);
	strcpy(newD->owner, owner);
	newD->age = age;

	return (newD);

}
