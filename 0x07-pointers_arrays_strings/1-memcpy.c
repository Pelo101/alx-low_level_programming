#include <stdio.h>
#include <string.h>

/**
* _memcpy - Write a function that copies memory area.
* @dest: destination string.
* @src: source file.
* @n: size of memory allocated.
* Return:  a pointer to dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

