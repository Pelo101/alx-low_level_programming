#include <stdio.h>
#include "function_pointers.h"
/**
*print_name - prints name.
*@f: pointer.
*/

void print_name(char *name, void (*f)(char *))
{
	while (!name)
		return;
	f(name);
}
