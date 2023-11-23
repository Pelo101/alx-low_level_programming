#include <stdio.h>
#include "main.h"

/**
 * print_binary -prints the binary representation of a number.
 *@n: stores the values that is being converted.
 *
 */

void print_binary(unsigned long int n)
{

	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int bit;


	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while ((n & mask) == 0 && mask > 0)
		{
			mask >>= 1;
		}
		while (mask > 0)
		{
			bit = (n & mask) ? 1 : 0;
			mask >>= 1;
			_putchar(bit + '0');
		}
	}
	_putchar('\n');

}
