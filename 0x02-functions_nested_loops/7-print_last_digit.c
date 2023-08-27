#include "main.h"

/**
*_abs - computes absolute value.
*@n: integer.
*Return: the absolute value.
*/


int _abs(int n)
{

	if (n < 0)
		return (-n);

	return (n);
}



/**
*print_last_digit -  function that prints the last digit of a number.
*@num: integer.
*Return: 0
*/
int print_last_digit(int num)
{

	int last_digit = _abs(num % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}
