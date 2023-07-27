#include <stdio.h>
#include <string.h>


/**
*_strcat - Write a function that concatenates two strings.
* @dest: destination string.
* @src: the string to append.
* Return: a pointer to the resulting string dest.
*/

char *_strcat(char *dest, char *src)
{
	int len, i;

        len = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[len] != '\0')

	{	dest[i] = src[len];
		len++;
		i++;
	}

	dest[i] = '\0';

	return (dest);

}

