#include <stdio.h>
#include "main.h"

/**
 * print_sign -function to check for a sign of a number
 * @n: is int that will use for argument of the function
 * Return: Always 0 (success)
 */
int print_sign(int n)

{
	if (n > 0)

	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}


}
