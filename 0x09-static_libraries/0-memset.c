#include <stdio.h>
#include <string.h>

/**
* _memset -  function that fills memory with a constant byte.
* @s: address of memory to be filled.
* @b: value to be filled.
* @n: numeber of bytes allocated.
* Return: pointer to the memory area s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

