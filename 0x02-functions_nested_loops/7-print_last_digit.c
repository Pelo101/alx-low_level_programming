#include "main.h"

/**
*print_last_digit -  function that prints the last digit of a number.
*@num: integer.
*Return: 0
*/
int print_last_digit(int num)
{

	int last_digit = num % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
