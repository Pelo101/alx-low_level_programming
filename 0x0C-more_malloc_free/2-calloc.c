#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
**_calloc - function that allocates memory for an array, using malloc.
* @nmemb: number of elements.
* @size: size of elements.
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	size_t element_size = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(element_size);

	if (ptr == NULL)
		return (NULL);

	if (ptr != NULL)
	{
		memset(ptr, 0, element_size);
	}
	return (ptr);
}
