#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - invokes a print function
 * @name: the name
 * @f: the invoked function
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
