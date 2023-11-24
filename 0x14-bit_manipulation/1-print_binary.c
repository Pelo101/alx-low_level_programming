#include <stdio.h>
#include "main.h"

/**
 * print_binary -prints the binary representation of a number.
 *@n: stores the values that is being converted.
 *
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask = sizeof(n) * 8;
	int bit;
	int leading_zeros = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = mask  - 1 ; i >= 0;  --i)
	{
		bit = (n & (1 << i)) >> i;

		if (bit == 1 || !leading_zeros)
		{
			_putchar(bit + '0');
			leading_zeros = 0;
		}
	}
	_putchar('\n');

}
