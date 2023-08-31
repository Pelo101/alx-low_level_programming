#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
*@b: string.
*Return:the converted number or 0.
*/
unsigned int binary_to_uint(const char *b)
{

	int i = 0;
	int pv = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] == '0' || b[i] == '1')
	{
		pv <<= 1;
		pv += b[i] - '0';
		i++;
	}
	return (pv);

}
