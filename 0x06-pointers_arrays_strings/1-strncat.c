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


	while (dest[i] != '\0')
	{
		i++;
	}

	while (src !=  '\0' &&  j > n)

	{i
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
