#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - function that returns the sum of all its parameters.
*@n: number of integers.
*Return: sum of all integers.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;


	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);

	}
	va_end(ptr);

	return (sum);
}
