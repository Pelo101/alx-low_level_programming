#include "main.h"

/**
*is_prime_number - a function that returns 1 if the
*input integer is a prime number, otherwise return 0.
* @n: integer.
*Return: prime number.
*/

int is_prime_number(int n)
{
	int i = 0;

	if (n < 2)
	{
		return (0);
	}

	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
