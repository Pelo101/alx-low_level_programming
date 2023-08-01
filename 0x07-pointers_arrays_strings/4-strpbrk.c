#include <string.h>
#include "main.h"

/**
*_strpbrk - function that searches a string for any of a set of bytes.
* @s: string to scan.
* @accept: string to check for matching characters.
* Return:  pointer to the byte in s that matches one of the bytes in accept
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL)
}
