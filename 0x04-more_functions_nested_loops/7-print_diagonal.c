#include <stdio.h>
#include "main.h"

/**
 * prints_diagonal - prints a diagonal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int c, i;

	if (n  >  0)
	{

		for  (c =  0;  c  <  n;  c++)
		{

			for (i  = 0;  i  <  n;  n++)
			{
				_putchar(' ');

			}
			_putchar('\\');

		}

		if  (c  == (n - 1))
		{
			continue;

		}
		_putchar('\n');

	}
}
