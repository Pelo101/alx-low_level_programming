#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - a function that searches for a value in a
 *sorted array of integers using the Binary search algorithm
 *@array: array to search
 *@size: size of array
 *@value: value to search for
 *Return: value at index
 */
int binary_search(int *array, size_t size, int value)
{

	int low = 0;
	int high = size -  1;
	int mid, i;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);

		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
