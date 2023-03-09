#include "main.h"

/**
 * factorial - generate factorial for input
 * @n: integer
 * Return: 1 and -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
