# include "main.h"
# include <stdio.h>

/**
 * _strcat- function that concatenates two strings
 * @dest: destination file
 * @src: source file that is appended
 *
 * Return: dest (success)
 */

char *_strcat(char *dest, char *src)
{

	int i, int j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i]	= src[j];

	}
	dest[i] = '\0';

	return (dest);
}
