#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - prints name.
*@f: pointer.
*@name: name to be printed.
*/

void print_name(char *name, void (*f)(char *))
{
	while (!name || !f)
		return;
	f(name);
}
