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
	unsigned int x;
	va_list strings;

	if (separator == NULL || *separator == 0)
		separ = "";
	else
		separ = (char *) separator;
	va_start(strings, n);

	if (n > 0)
		printf("%s", va_arg(strings, char *));
	for (x = 1; x < n; x++)
	{
		p = va_arg(strings, char*);
		if (p == NULL)
			p = "(nil)";
		printf("%s%s", sep, p);
	}
	printf("\n");
	va_end(strings);
}
