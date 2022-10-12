#include "function_pointer.h"

/**
 *print_name - prints a name
 *@name: name of pointer to be printed
 *@f: function to pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL  ||  f == NULL)
		return;

	f(name);


}
