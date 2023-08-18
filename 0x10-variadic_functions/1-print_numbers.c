#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - function that prints numbers, followed by a new line.
*@n: number of integers.
*@separator: string to be printed between numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

		if (separator == NULL)
		{
			printf("%d", va_arg(ptr, int));
		}
		else if (i != n - 1  && separator != NULL)
		{
			printf("%s", separator);

		}


	}
	va_end(ptr);
	printf("\n");
}

