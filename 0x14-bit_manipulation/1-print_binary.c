#include <stdio.h>
#include "main.h"

/**
 * print_binary -prints the binary representation of a number.
 *@n: stores the values that is being converted.
 *
 */

void print_binary(unsigned long int n)
{
	int i;
	int num_bits = sizeof(unsigned long int) * 8;
	int bit;
	int lead_zero = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{

		for (i = num_bits - 1;  i >= 0; i--)
		{
			bit = (n >> i) & 1;
			if (bit == 1 ||  lead_zero == 0)
			{
				_putchar(bit + '0');
				lead_zero = 0;

			}

		}

	}
	_putchar('\n');

}
