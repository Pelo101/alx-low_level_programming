#include<stdio.h>
#include<stdlib.h>
#include"search_algos.h"

/**
 *linear_search - function performs a linear search
 *@array: array that is being searched
 *@size: size of array
 *@value: key we are searching for
 *Return: value at index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}
