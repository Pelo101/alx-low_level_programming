#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints string, followed by new linew
 *@separator: function to print between strings
 *@n :number of strings to print
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	 va_start(list, n);
	for (i = 0; i < n; i++)

		{
		str = va_arg(list, char *);
		if (str)
			printf("%s",  str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
		}
	 printf("\n");
	 va_end(list);

}




















