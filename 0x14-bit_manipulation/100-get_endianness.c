#include <stdio.h>
#include "main.h"

/**
 *get_endianness - function that checks the endianness.
 *
 *Return: 0 if big endian, 1 little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *byte  = (char *) &x;

	return ((*byte == 1) ? 1 : 0);


}
