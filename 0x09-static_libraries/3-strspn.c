#include <stdio.h>
#include <string.h>

/**
* _strspn -  function that gets the length of a prefix substring.
* @s: initial segment.
* @accept: string containing characters to match
* Return: number of bytes in the initial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	int len1, len2  = 0;

	int i;

	if (s == NULL || accept == NULL)
	{
		return (0);
	}
	while (s[len1] != '\0')
	{
		len1++;
	}
	while (accept[len2] != '\0')
	{
		len2++;
	}
	if (len2  > len1)
	{
		return (0);
	}

	for (i = 0; i < len2; i++)
	{
		if (s[i] != accept[i])
		{
			return (0);
		}
	}
      return (i);
}
