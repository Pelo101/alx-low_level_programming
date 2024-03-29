#include <stdio.h>
#include <stddef.h>


/**
* _strncat - Write a function that concatenates two strings.
* @dest: destination string.
* @src: string to append.
* @n: size of string.
* Return: pointer to the resulting string dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] !=  '\0' &&  j < n)

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
