#include <stdio.h>
#include <string.h>
#include "main.h"


/**
*_strncpy - function that copies a string.
* @dest: destination.
* @src: string to copy.
* @n: size of string.`
* Return: Always 0
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}

	for (; i < n; ++i)
	{
		dest[i] = '\0';
	}
	return (dest);

}


