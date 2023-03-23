#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - summing many vars
 * @n: variadic ints
 * Return: their sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list integers;
	unsigned int x, sum = 0;

	if (n == 0)
		return (0);

	va_start(integers, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(integers, const unsigned int);
	}

	va_end(integers);

	return (sum);
}
