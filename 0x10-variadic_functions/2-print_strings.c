#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: delimiter
 * @n: number of printables
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list stringlist;
	unsigned int x;
	char *str;

	if (separator == NULL)
		return;

	va_start(stringlist, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(stringlist, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (x != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(stringlist);
}
