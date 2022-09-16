#include "main.h"

/**
 * print_most_numbers : function prints numbers except 2 and 4
 *
 * Description: print most numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{

	int n;

	for (n  = 48 ; n  <  58 ;  n++)
	{

		if (n  == 50  ||  n  ==  52)
		{
			continue;

		}
		_putchar(n);
	}
	_putchar(10);
}
