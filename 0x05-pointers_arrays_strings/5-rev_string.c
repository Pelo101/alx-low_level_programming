#include "main.h"
#include <stdio.h>

/**
* rev_string -  function that reverses a string
*
*@s: parameter.
*/

void rev_string(char *s)
{
	char t;
	int i, j, len;

	len = 0;
	j = 0;

	while (s[len] != '\0')
	{
		len++;

	}

	j = len - 1;

	for (i = 0; i < len / 2; i++)

	{
		t = s[i];
		s[i] = s[j];
		s[j--] = t;

	}
}
