#include "main.h"

/**
 * _isdigit - function checks whether character is a digit
 * @c: integer testing
 * Return: 1 (success) or 0 (not success)
 */
int _isdigit(int c)
{

	if (c  >=  48  &&  c  <= 57 )
	{
		return (1);
	}

	else
	{
		return (0);
	}

}
