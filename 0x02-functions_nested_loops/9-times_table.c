#include "main.h"

/**
 * times_table - Prints the  9 times table, starting with 0
 *
 * Return: Always 0 (success)
 */

void times_table(void)
{
	int num, mult, prod;

	for num = 0; num <= 9; num ++
	{
		_putchar('0');

		for(num = 0; num  <= 9; num++)
	}

		{
			_putchar(',');
			_purchar(' ');


			prod = num * mult;

			if (prod <= 9)

			_putchar(' ');

			else
			_putchar((prod / 10) + '0');
			_puthcar((prod % 10) + '0');
		}
		_putchar('\n')
}
