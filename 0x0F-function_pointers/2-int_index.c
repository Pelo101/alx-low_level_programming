#include <stdio.h>
#include "function_pointers.h"

/**
*int_index - Write a function that searches for an integer.
*@array: array to be printed.
*@size: number of elements.
*@cmp: compare integers.
*Return: index of first element.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0))
			return (i);

		}
	}
	return (-1);
}
