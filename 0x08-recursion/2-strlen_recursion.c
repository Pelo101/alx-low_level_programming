# include "main.h"

/**
 *_strlen_recursion - returns length of string
 *@s: length of string to be determined
 *
 *Return: length of strinh
 */

int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s !=  '\0')
	{
		sum++;
		sum += _strlen_recursion(s  + 1);
	}

	return (sum);
}
