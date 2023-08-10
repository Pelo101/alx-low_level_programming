#include "main.h"
#include <stdlib.h>

/**
* **alloc_grid - a function that returns a pointer to a
* 2 dimensional array of integers.
* @width: width of array.
* @height: height of array.
* Return: pointer to array.
*/

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **arr = 0;


	while (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i]  == NULL)
		{

		for (j = 0; j <= i; j++)

		{
			free(arr[j]);
		}
		free(arr);
		return (NULL);

		for (j = 0; j < width; j++)
		{
			arr[i][j] = i * width + j;
		}

		}
	}
	return (arr);
}
