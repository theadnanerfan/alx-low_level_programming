#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: Name
 * @f: Funct
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
