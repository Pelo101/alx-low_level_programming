#include <stdio.h>
#include "main.h"

/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: pointer to the number.
 *@index: index of given number.
 *Return: 1 for Succcess -1 for an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

		if (index > 64)
			return (-1);
		if ((*n >> index) & 1)
		{

			*n -= 1 << index;
				return (1);
		}
		return (1);

}
