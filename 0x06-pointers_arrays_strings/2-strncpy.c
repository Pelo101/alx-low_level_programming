#include "main.h"

/**
 * _strncpy -  function that copies a string
 * works identically to strncpy
 * @dest: buffer storing the string copy
 * @src : the sourcee string
 * @n : max mumber of byte copied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0;  i  < n  && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ;  i < n; i++)
		dest[i] = '\0';

	return (dest);
}

