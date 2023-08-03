#include "main.h"

/**
*is_divisible - checks if n is divisible by any number.
* @n: integer.
* @i: integer.
* Return: is_divisible
*/

int is_divisible(int n, int i)
{
	if (i * i > n)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (1);
	}
	return (is_divisible(n, i + 1));
}

/**
*is_prime_number - a function that returns 1 if the
*input integer is a prime number, otherwise return 0.
* @n: integer.
*Return: prime number.
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, 2));
}
