#include "main.h"
#include <stdio.h>

/**
* _puts - function that prints a string, followed by a new line, to stdout
* @s: parameter.
* Return: Always 0.
*/

void _puts(char *str)
{
	int c;

	c = 0;

	for (c = 0; str[c] != '\0'; c++)

	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

