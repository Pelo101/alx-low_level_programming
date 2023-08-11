#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*array_range - function that creates an array of integers.
*@min: minimum integers.
*@max: maximum integers.
*Return: pointer to array.
*/

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	size = max - min + 1;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
