#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbs
 * @separator: seperator
 * @n: ints to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *delim;
	unsigned int x;
	va_list numbers;

	if (separator == NULL || *separator == 0)
		delim = "";
	else
		delim = (char *) separator;
	va_start(numbers, n);

	if (n > 0)
		printf("%d", va_arg(numbers, int));
	for (x = 1; x < n; x++)
		printf("%s%d", delim, va_arg(numbers, int));
	printf("\n");
	va_end(numbers);
}
