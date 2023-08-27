#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdarg.h>
/**
*print_all - function that prints anything.
*@format: list of types of arguments.i
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	char c;
	float f;
	int separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (separator && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		separator = 1;

		if (format[i] == 'c')
		{	c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[i] == 'i')
		{	int num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format[i] == 'f')
		{	f = va_arg(args, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{	s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}







