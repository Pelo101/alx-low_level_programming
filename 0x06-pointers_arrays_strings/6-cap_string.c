#include "main.h"
#include <stdio.h>
#include <string.h>


/**
* cap_string - Write a function that capitalizes all words of a string.
* @s: string.
* Return: string.
*/

char *cap_string(char *s)
{

	char sep[13] = { ' ', '\t', '\n', ',', ';', '.',
		     '!', '?', '"', '(', ')', '{', '}'};

	int i, j;

	for (i = 0; s[i] != '\0'; i++)

	{


		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')

			s[i] -= 'a' + 'A';


		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				++i;

				if (s[i] >= 'a' && s[i] <= 'z')

					s[i] -= 'a' + 'A';

			}
			else
			{

				if (s[i] >= 'A' && s[i] <= 'Z')
					s[i] += 'a' + 'A';
			}


		}


	}
	return (s);
}

