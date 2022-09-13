#include <stdio.h>
#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @c; is the int will use for the argument of the functionn
 * Return: 1 (lowercase) or 0 (not lowercase)
 */

int _islower(int c)

{
	if (c  >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
		return (0);


}
