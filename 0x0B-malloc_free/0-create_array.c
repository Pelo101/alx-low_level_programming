#include "main.h"
#include <stdlib.h>


/**
*create_array - Write a function that creates an array of chars,
* and initializes it with a specific char.
*@c: character  to intialize array.
*@size: size of array
*Return: Array
*/

char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;


	if (size == 0)
		return (0);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);



}
