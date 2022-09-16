i#include <stdio.h>
#include "main.h"

/**
 * prints_diagonal - prints a diagonal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int c, i;

	c = 0;

		while (n  >  0)
	{

		i  =  c;

		while (i  >  0)
		{

		_putchar(' ');

		i--;
		}
		_putchar('\\');
		_putchar('\n');

		c++;
		n--;
	}

	if (c  <  1)

	_putchar('\n');


}


