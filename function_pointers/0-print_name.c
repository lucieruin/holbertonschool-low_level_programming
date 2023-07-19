#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: pointer of name
 * @f: pointer of function f
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
