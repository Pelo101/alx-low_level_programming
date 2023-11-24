#include <stdio.h>
#include "main.h"

/**
 *get_bit - function that returns the value of a bit at a given index.
 * @n : stores value.
 * @index : index of given value
 *Return: value at index or  - 1 at error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);

}
