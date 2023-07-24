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

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);

}
