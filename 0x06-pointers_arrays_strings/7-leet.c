# include "main.h"

/**
 * leet  - encodes a string into  1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *)
{
	int i, j;

	char a[] =  "aAeoOtT1L";
	Char b[] =  "443007711";


	for (i = 0;  *(s  +  i);  i++)
	{
		for (j = 0;  j  <= 9; j++)

		{
			if  (a[j] == *(s  +  i))

				*(s + i) = b[j];
		}

	}
}	return (s);
