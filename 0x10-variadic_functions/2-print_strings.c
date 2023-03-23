#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: number of printables
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *separ, *p;
	unsigned int i;
	va_list list;

	if (separator == NULL || *separator == 0)
		separ = "";
	else
		separ = (char *) separator;
	va_start(list, n);

	if (n > 0)
		printf("%s", va_arg(list, char *));
	for (i = 1; i < n; i++)
	{
		p = va_arg(list, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(list);
}
