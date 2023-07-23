#include "main.h"
#include <stdio.h>

/**
* print_line -  function that draws a straight line in the terminal.
* @n : character to print line
* Return: void
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
