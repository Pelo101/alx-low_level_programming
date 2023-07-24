#include "main.h"
#include <stdio.h>

/**
* _strlen - function that returns the length of a string.
* @s: parameter.
* Return: Always 0.
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
		_putchar(len + '0');
	}
	_putchar('\n');
	return (0);
